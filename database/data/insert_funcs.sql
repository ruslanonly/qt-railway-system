DROP FUNCTION insert_schedule;
CREATE OR REPLACE FUNCTION insert_schedule() RETURNS VOID AS $$
DECLARE
counter INT := 1000;
BEGIN
  LOOP
    EXIT WHEN counter > 12000;
    INSERT INTO schedule(route_id, train_id, departure_date, arrival_date)
    VALUES (6, 5, '999-05-18 15:00:00', CONCAT(counter, '-05-20 19:30:00'));
  counter := counter + 1;
  END LOOP;
END;
$$ LANGUAGE plpgsql;