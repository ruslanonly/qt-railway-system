CREATE OR REPLACE FUNCTION update_schedule_train(old_train_id INT, new_train_id INT) RETURNS VOID AS $$
DECLARE
  schedule_row schedule%ROWTYPE;
  temp_train_route_id INT;
  cursor_schedule CURSOR FOR SELECT * FROM schedule;
BEGIN
  OPEN cursor_schedule;

  LOOP
    FETCH cursor_schedule INTO schedule_row;
    EXIT WHEN NOT FOUND;

    if schedule_row.departure_date > CURRENT_TIMESTAMP THEN
      RAISE NOTICE 'CONTINUE current_timestamp';
      CONTINUE;
    END IF;

    SELECT route_id INTO temp_train_route_id FROM train WHERE train.id = schedule_row.train_id;
    if temp_train_route_id != schedule_row.route_id THEN
      RAISE NOTICE 'CONTINUE trains route_id is not compatible to schedule route_id';
      CONTINUE;
    END IF;

    IF schedule_row.train_id = old_train_id THEN
      UPDATE schedule SET train_id = new_train_id WHERE CURRENT OF cursor_schedule;
      RAISE NOTICE 'UPDATED';
    END IF;
  END LOOP;

  CLOSE cursor_schedule;
END;
$$ LANGUAGE plpgsql;