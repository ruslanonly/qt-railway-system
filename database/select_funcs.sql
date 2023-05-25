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
