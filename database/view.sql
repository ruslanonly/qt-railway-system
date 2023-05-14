CREATE OR REPLACE VIEW schedule_details AS
SELECT s.id AS schedule_id,
       r.name AS route_name,
       r.departure_station_id,
       r.arrival_station_id,
       dep.name AS departure_station_name,
       dep.city AS departure_city,
       dep.country AS departure_country,
       arr.name AS arrival_station_name,
       arr.city AS arrival_city,
       arr.country AS arrival_country,
       t.name AS train_name,
       t.type AS train_type,
       t.railcar_capacity,
       t.railcars_amount,
       t.first_class_price,
       t.second_class_price,
       p.departure_date,
       p.arrival_date,
       p.status
FROM schedule s
JOIN route r ON s.route_id = r.id
JOIN train t ON r.id = t.route_id
JOIN station dep ON r.departure_station_id = dep.id
JOIN station arr ON r.arrival_station_id = arr.id;