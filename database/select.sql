/*  CASE-выражение */
SELECT
    ticket.railcar_class,
    CASE 
        WHEN ticket.railcar_class = 1 THEN train.first_class_price
        WHEN ticket.railcar_class = 2 THEN train.second_class_price
        ELSE 0
    END AS ticket_price
FROM ticket
INNER JOIN train ON ticket.train_id = train.id;

/*  Многотабличный VIEW, с возможностью его обновления view.sql*/

CREATE OR REPLACE FUNCTION update_ticket_info(p_ticket_id INTEGER, p_seat_no INTEGER)
RETURNS VOID AS $$
BEGIN
  UPDATE ticket
  SET seat_no = p_seat_no
  WHERE id = p_ticket_id;
  
  UPDATE ticket_info
  SET seat_no = p_seat_no
  WHERE id = p_ticket_id;
END;
$$ LANGUAGE plpgsql;

/* Запросы, содержащие подзапрос в разделах SELECT, FROM и WHERE (в
каждом хотя бы по одному); */

SELECT first_name, last_name, (SELECT COUNT(*) FROM ticket WHERE passenger_id = passenger.id) AS ticket_count
FROM passenger;

SELECT * FROM 
  (SELECT name, departure_date FROM route WHERE departure_station_id = 
    (SELECT id FROM station WHERE name = 'Moscow')) AS moscow_routes 
WHERE EXTRACT(YEAR FROM departure_date) = 2022;

--WHERE get_available_seats

/* Коррелированные подзапросы (минимум 3 запроса). */



SELECT first_name as 'Имя', last_name as 'Фамилия', middle_name as 'Отчество',
(SELECT COUNT(*) FROM ticket WHERE passenger_id = passenger.id) AS 'Количество билетов'
FROM passenger;

SELECT r.name, (
  SELECT MAX(tr.first_class_price)
  FROM ticket t
  JOIN schedule s ON t.schedule_id = s.id
  JOIN train tr ON tr.id = s.train_id
  WHERE s.route_id = r.id
) AS max_ticket_price
FROM route r;


/* Многотабличный запрос, содержащий группировку записей, агрегатные
функции и параметр, используемый в разделе HAVING */

SELECT r.name AS route_name, t.name AS train_name, COUNT(*) AS num_tickets
FROM ticket ti
JOIN schedule s ON ti.schedule_id = s.id
JOIN train t ON s.train_id = t.id
JOIN route r ON t.route_id = r.id
GROUP BY r.name, t.name
HAVING COUNT(*) > (t.railcar_capacity * railcars_amount);

/* Запросы, содержащий предикат ANY(SOME) или ALL (для каждого
предиката); */

SELECT *
FROM ticket
WHERE passenger_id = ANY (
  SELECT passenger_id
  FROM ticket
  GROUP BY passenger_id
  HAVING COUNT(*) > 1
);


SELECT r.name, r.id
FROM route r
WHERE 'нет мест' = ALL (
  SELECT schedule.status
  FROM schedule
  WHERE schedule.route_id = r.id
);

SELECT * 
FROM passenger WHERE id = ANY (
SELECT passenger_id FROM ticket GROUP BY passenger_id HAVING COUNT(*) > 1)