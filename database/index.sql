DROP INDEX IF EXISTS idx_station_name;
DROP INDEX IF EXISTS idx_schedule_departure_date;

CREATE INDEX idx_schedule_departure_date ON schedule USING btree(departure_date);

-- CREATE INDEX idx_passport_serial_no ON passenger USING hash (passport_serial_no);

-- CREATE INDEX idx_train_type ON train USING schedule(departure_date, arrival_date);