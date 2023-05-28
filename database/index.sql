DROP INDEX IF EXISTS idx_schedule_departure_date;
DROP INDEX IF EXISTS idx_btree_schedule_id;
DROP INDEX IF EXISTS idx_btree_passenger_passport;
DROP INDEX IF EXISTS idx_route_name;
DROP INDEX IF EXISTS idx_hash_train_name;
DROP INDEX IF EXISTS idx_schedule_departure_date;

CREATE INDEX idx_btree_passenger_passport ON passenger USING btree(passport_serial_no, passport_code);
-- EXPLAIN ANALYZE SELECT id FROM train tr WHERE tr.name = 'Train 9996';
CREATE INDEX idx_hash_train_name ON train USING hash (name);
-- EXPLAIN ANALYZE SELECT id FROM passenger WHERE passport_serial_no = 8765 AND passport_code = 135792;
-- CREATE INDEX idx_schedule_departure_date ON schedule USING gin(departure_date);

-- EXPLAIN ANALYZE SELECT * FROM passenger p WHERE EXISTS (SELECT 1 FROM ticket t INNER JOIN schedule s ON t.schedule_id = s.id WHERE t.passenger_id = p.id AND s.departure_date > CURRENT_TIMESTAMP);

-- EXPLAIN ANALYZE SELECT seats.seat_no
-- FROM generate_series(1, (SELECT railcar_capacity FROM train WHERE id = (SELECT train_id FROM schedule WHERE id = in_schedule_id))) AS seats(seat_no)
-- WHERE NOT EXISTS (
--     SELECT 1
--     FROM ticket t
--     WHERE t.schedule_id = in_schedule_id
--     AND t.railcar_no = in_railcar_no
--     AND t.seat_no = seats.seat_no
-- );

-- CREATE INDEX idx_train_type ON train USING schedule(departure_date, arrival_date);