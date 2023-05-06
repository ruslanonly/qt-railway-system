CREATE OR REPLACE PROCEDURE add_ticket_transaction(
  IN p_schedule_id INT,
  IN p_passenger_id INT,
  IN p_seat_no INT,
  IN p_railcar_no SMALLINT,
  IN p_railcar_class SMALLINT
) AS $$
DECLARE 
  _train_id INT;
  _railcars_amount INT;
  _railcar_capacity INT;
BEGIN
    SELECT train_id INTO _train_id
    FROM schedule WHERE id = p_schedule_id;

    SELECT railcars_amount, railcar_capacity
    INTO _railcars_amount, _railcar_capacity
    FROM train
    WHERE id = _train_id;

    BEGIN
      PERFORM add_ticket(p_schedule_id, p_passenger_id, p_seat_no, p_railcar_no, p_railcar_class);
      

      IF (p_railcar_no > _railcars_amount OR p_seat_no > _railcar_capacity) THEN
        ROLLBACK;
        RAISE EXCEPTION 'Номер вагона или места неверный';
      END IF;

      COMMIT;
    END;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE PROCEDURE test() AS $$
BEGIN
    
END;
$$ LANGUAGE plpgsql;