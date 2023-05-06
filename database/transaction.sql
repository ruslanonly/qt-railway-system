CREATE OR REPLACE PROCEDURE book_ticket_transaction(
  IN p_first_name VARCHAR(30),
  IN p_middle_name VARCHAR(30),
  IN p_last_name VARCHAR(30),
  IN p_passport_serial_no SMALLINT,
  IN p_passport_code INT,

  IN p_schedule_id INT,
  IN p_seat_no INT,
  IN p_railcar_no SMALLINT,
  IN p_railcar_class SMALLINT
) AS $$
DECLARE
  v_passenger_id INT;
  v_schedule_id INT;
  _railcars_amount INT;
  _railcar_capacity INT;
BEGIN

  BEGIN
    -- Создаем нового пассажира, если его еще нет в базе
    INSERT INTO passenger (first_name, middle_name, last_name, passport_serial_no, passport_code)
    SELECT p_first_name, p_middle_name, p_last_name, p_passport_serial_no, p_passport_code
    WHERE NOT EXISTS (
      SELECT id FROM passenger WHERE passport_serial_no = p_passport_serial_no AND passport_code = p_passport_code
    );
    
    SELECT id INTO v_passenger_id FROM passenger 
    WHERE passport_serial_no = p_passport_serial_no AND passport_code = p_passport_code;

    -- Ищем вместимость вагонов и количество вагонов поезда
    SELECT railcars_amount, railcar_capacity
    INTO _railcars_amount, _railcar_capacity
    FROM train
    WHERE id = (SELECT train_id FROM schedule WHERE id = p_schedule_id);

    IF (p_railcar_no > _railcars_amount OR p_seat_no > _railcar_capacity) THEN
      RAISE EXCEPTION 'Номер вагона или места неверный';
    END IF;

    -- Бронируем билет на заданный рейс
    PERFORM add_ticket(p_schedule_id, v_passenger_id, p_seat_no, p_railcar_no, p_railcar_class);

    EXCEPTION WHEN OTHERS THEN
    -- Если возникла ошибка, откатываем транзакцию
    ROLLBACK;
    RAISE;

        -- Если все операции завершены успешно, фиксируем транзакцию
    COMMIT;
    END;
END;
$$ LANGUAGE plpgsql;