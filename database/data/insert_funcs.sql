DROP FUNCTION insert_schedule;

CREATE OR REPLACE FUNCTION insert_schedule()
RETURNS VOID AS
$$
DECLARE
  i INT := 1;
BEGIN
  WHILE i <= 10000 -- Change the number of rows as needed
  LOOP
    DECLARE
      departure_date TIMESTAMP;
      arrival_date TIMESTAMP;
    BEGIN
      departure_date := NOW() + INTERVAL '1 day' * FLOOR(RANDOM() * 30); -- Random departure date within the next 30 days
      arrival_date := departure_date + INTERVAL '1 day' * (FLOOR(RANDOM() * 10) + 1); -- Random arrival date within 1 to 10 days after departure
    
      INSERT INTO schedule (route_id, train_id, departure_date, arrival_date, status)
      VALUES (
        FLOOR(RANDOM() * 10) + 1, -- Random route_id between 1 and 10
        FLOOR(RANDOM() * 10) + 1, -- Random train_id between 1 and 10
        departure_date,
        arrival_date,
        CASE FLOOR(RANDOM() * 3)
          WHEN 0 THEN 'осталось мало мест'
          WHEN 1 THEN 'есть места'
          ELSE 'нет мест'
        END
      );
    EXCEPTION
      WHEN others THEN
        -- Ignore the exception and continue to the next iteration
        NULL;
    END;
    
    i := i + 1;
  END LOOP;
  
  RETURN;
END;
$$
LANGUAGE plpgsql;



DROP FUNCTION insert_passenger;
CREATE OR REPLACE FUNCTION insert_passenger()
RETURNS VOID AS
$$
DECLARE
  first_names VARCHAR[] := ARRAY['John', 'Emma', 'Michael', 'Sophia', 'William', 'Olivia', 'James', 'Ava', 'Robert', 'Mia'];
  middle_names VARCHAR[] := ARRAY['Lee', 'Grace', 'Allen', 'Rose', 'David', 'Elizabeth', 'Thomas', 'Victoria', 'Daniel', 'Emily'];
  last_names VARCHAR[] := ARRAY['Smith', 'Johnson', 'Williams', 'Brown', 'Jones', 'Garcia', 'Miller', 'Davis', 'Wilson', 'Martinez'];
  i INT := 1;
BEGIN
  WHILE i <= 10 -- Change the number of rows as needed
  LOOP
    INSERT INTO passenger (first_name, middle_name, last_name, passport_serial_no, passport_code)
    SELECT
      first_names[FLOOR(RANDOM() * 10) + 1], -- Random first name from the array
      middle_names[FLOOR(RANDOM() * 10) + 1], -- Random middle name from the array
      last_names[FLOOR(RANDOM() * 10) + 1], -- Random last name from the array
      FLOOR(RANDOM() * 9000) + 1000, -- Random passport_serial_no between 1000 and 9999
      FLOOR(RANDOM() * 900000) + 100000 -- Random passport_code between 100000 and 999999
    WHERE NOT EXISTS (
      SELECT 1 FROM passenger
      WHERE passport_serial_no = FLOOR(RANDOM() * 9000) + 1000
        AND passport_code = FLOOR(RANDOM() * 900000) + 100000
    );
    
    i := i + 1;
  END LOOP;

  RETURN;
END;
$$
LANGUAGE plpgsql;

DROP FUNCTION insert_train;
CREATE OR REPLACE FUNCTION insert_train()
RETURNS VOID AS
$$
DECLARE
  i INT := 1;
BEGIN
  WHILE i <= 10000 -- Change the number of rows as needed
  LOOP
    INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price)
    SELECT
      FLOOR(RANDOM() * 10) + 1, -- Random route_id between 1 and 10
      'Train ' || i, -- Train name
      CASE FLOOR(RANDOM() * 3)
        WHEN 0 THEN 'скоростной-пассажирский'
        WHEN 1 THEN 'скорый-пассажирский'
        ELSE 'пассажирский'
      END, -- Random train type
      FLOOR(RANDOM() * 200) + 1, -- Random railcar_capacity between 1 and 200
      FLOOR(RANDOM() * 10) + 1, -- Random railcars_amount between 1 and 10
      FLOOR(RANDOM() * 1000) + 1, -- Random first_class_price between 1 and 1000
      FLOOR(RANDOM() * 1000) + 1 -- Random second_class_price between 1 and 1000
    WHERE NOT EXISTS (
      SELECT 1 FROM train WHERE name = 'Train ' || i
    );
    
    i := i + 1;
  END LOOP;

  RETURN;
END;
$$
LANGUAGE plpgsql;