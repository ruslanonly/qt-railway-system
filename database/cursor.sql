CREATE OR REPLACE FUNCTION update_schedule_train(cursor_schedule CURSOR, old_train_id INT, new_train_id INT) RETURNS VOID AS $$
DECLARE
  schedule_row schedule%ROWTYPE;
BEGIN
  OPEN cursor_schedule;

  LOOP
    FETCH cursor_schedule INTO schedule_row;
    EXIT WHEN NOT FOUND;

    if schedule_row.departure_date > CURRENT_TIMESTAMP THEN
      
    END IF;

    IF schedule_row.train_id = old_train_id THEN
      UPDATE schedule SET train_id = new_train_id WHERE CURRENT OF cursor_schedule;
    END IF;
  END LOOP;

  CLOSE cursor_schedule;
END;
$$ LANGUAGE plpgsql;

DECLARE
  cursor_schedule CURSOR FOR SELECT * FROM schedule;
BEGIN
  PERFORM update_schedule_train(cursor_schedule, 1, 2);
END;