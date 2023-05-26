DROP FUNCTION get_schedule_revenue;
CREATE OR REPLACE FUNCTION get_schedule_revenue() 
RETURNS TABLE (
  route_name VARCHAR,
  train_name VARCHAR,
  s_departure_date TIMESTAMP,
  s_arrival_date TIMESTAMP,
  revenue INTEGER
) AS $$
BEGIN
  RETURN QUERY SELECT
    r.name as route_name, tr.name as train_name,
    s.departure_date as s_departure_date, s.arrival_date as s_arrival_date,
    COALESCE(
      CAST(SUM(
        CASE 
           WHEN t.railcar_class = 1 THEN tr.first_class_price
           WHEN t.railcar_class = 2 THEN tr.second_class_price
           ELSE 0
        END
      ) AS INTEGER), 
    0) as revenue
  FROM
    schedule s
    LEFT JOIN ticket t ON s.id = t.schedule_id
    LEFT JOIN train tr ON s.train_id = tr.id
    INNER JOIN route r ON s.route_id = r.id
  GROUP BY s.id, r.name, tr.name, s.departure_date, s.arrival_date
  ORDER BY revenue DESC;
END;
$$ LANGUAGE plpgsql;




DROP FUNCTION get_sch_tickets_amount;
CREATE OR REPLACE FUNCTION get_sch_tickets_amount(percentage INT) 
RETURNS TABLE (
  route_name VARCHAR,
  train_name VARCHAR,
  s_departure_date TIMESTAMP,
  s_arrival_date TIMESTAMP,
  tickets_amount INT
) AS $$
BEGIN
  RETURN QUERY SELECT 
  r.name AS route_name, 
  t.name AS train_name, 
  s.departure_date AS s_departure_date, 
  s.arrival_date AS s_arrival_date,
  CAST(COUNT(*) AS INTEGER) AS tickets_amount
  FROM ticket tk
  JOIN schedule s ON tk.schedule_id = s.id
  JOIN train t ON s.train_id = t.id
  JOIN route r ON s.route_id = r.id
  GROUP BY s.id, r.name, t.name, s.departure_date, s.arrival_date, t.railcar_capacity, t.railcars_amount
  HAVING COUNT(*) >= ROUND(t.railcar_capacity * t.railcars_amount * percentage / 100);
END;
$$ LANGUAGE plpgsql;


DROP FUNCTION get_routes_that_starts_in_city;
CREATE OR REPLACE FUNCTION get_routes_that_starts_in_city(in_city VARCHAR) 
RETURNS TABLE (
  route_name VARCHAR,
  departure_city VARCHAR,
  arrival_city VARCHAR
) AS $$
BEGIN
  RETURN QUERY 
  SELECT sel_route.name as route_name, deps.city as departure_city, arrs.city as arrival_city
  FROM (SELECT name, departure_station_id, arrival_station_id
      FROM route
      WHERE departure_station_id = (
          SELECT id
          FROM station
          WHERE city = in_city
      )) AS sel_route
  JOIN station AS deps ON deps.id = sel_route.departure_station_id
  JOIN station AS arrs ON arrs.id = sel_route.arrival_station_id;
END;
$$ LANGUAGE plpgsql;



DROP FUNCTION get_correlated_max_route_first_class_price;
CREATE OR REPLACE FUNCTION get_correlated_max_route_first_class_price() 
RETURNS TABLE (
  route_name VARCHAR,
  max_ticket_price INT
) AS $$
BEGIN
  RETURN QUERY 
    SELECT r.name as route_name, (
      SELECT MAX(tr.first_class_price)
      FROM ticket t
      JOIN schedule s ON t.schedule_id = s.id
      JOIN train tr ON tr.id = s.train_id
      WHERE s.route_id = r.id
    ) AS max_ticket_price
    FROM route r;
END;
$$ LANGUAGE plpgsql;


DROP FUNCTION get_correlated_ticket_for_passenger_name;
CREATE OR REPLACE FUNCTION get_correlated_ticket_for_passenger_name(like_string VARCHAR) 
RETURNS TABLE (
  id INT,
  schedule_id INT,
  passenger_id INT,
  seat_no INT,
  railcar_no SMALLINT,
  railcar_class SMALLINT
) AS $$
BEGIN
  RETURN QUERY 
  SELECT *
  FROM ticket t
  WHERE EXISTS (
    SELECT 1
    FROM passenger p
    WHERE p.id = t.passenger_id
    AND CONCAT(p.last_name, p.first_name, p.middle_name) LIKE CONCAT('%', like_string, '%')
  );
END;
$$ LANGUAGE plpgsql;


DROP FUNCTION get_correlated_passengers_waiting_for_schedule;
CREATE OR REPLACE FUNCTION get_correlated_passengers_waiting_for_schedule() 
RETURNS TABLE (
  last_name VARCHAR,
  first_name VARCHAR,
  middle_name VARCHAR,
  passport_serial_no SMALLINT,
  passport_code INT
) AS $$
BEGIN
  RETURN QUERY 
  SELECT 
    p.last_name as last_name, 
    p.first_name as first_name, 
    p.middle_name as middle_name, 
    p.passport_serial_no as passport_serial_no, 
    p.passport_code as passport_code
  FROM passenger p
  WHERE EXISTS (
    SELECT 1
    FROM ticket t
    INNER JOIN schedule s ON t.schedule_id = s.id
    WHERE t.passenger_id = p.id
    AND s.departure_date > CURRENT_TIMESTAMP
  );
END;
$$ LANGUAGE plpgsql;