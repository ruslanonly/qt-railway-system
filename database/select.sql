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

SELECT name, (SELECT COUNT(*) FROM passenger WHERE passenger.route_id = route.id) AS passenger_count
FROM route;

SELECT * FROM 
  (SELECT name, departure_date FROM route WHERE departure_station_id = 
    (SELECT id FROM station WHERE name = 'Moscow')) AS moscow_routes 
WHERE EXTRACT(YEAR FROM departure_date) = 2022;

SELECT name FROM train WHERE railcar_capacity > (SELECT AVG(railcar_capacity) FROM train);

/* Коррелированные подзапросы (минимум 3 запроса). */

SELECT *
FROM passenger p1
WHERE passport_serial_no < ANY (
  SELECT passport_serial_no
  FROM passenger p2
  WHERE p1.last_name = p2.last_name AND p1.id <> p2.id
);

SELECT *
FROM route r
WHERE EXISTS (
  SELECT 1
  FROM train t
  WHERE t.route_id = r.id AND t.railcars_amount > (
    SELECT AVG(railcars_amount)
    FROM train
  )
);

SELECT *
FROM train t
WHERE t.route_id = ANY (
  SELECT route_id
  FROM ticket
  WHERE railcar_class = 1
);

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

SELECT * FROM ticket
WHERE route_id = all (
  SELECT route_id FROM train
  WHERE first_class_price > 5000
);

SELECT * FROM route
WHERE id = any (
  SELECT route_id FROM train
  WHERE railcar_capacity > 100
);