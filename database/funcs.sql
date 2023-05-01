/* Station */
CREATE OR REPLACE FUNCTION add_station(
    _name VARCHAR(50),
    _city VARCHAR(30),
    _country VARCHAR(30)
) RETURNS VOID AS $$
BEGIN
    INSERT INTO station (name, city, country) VALUES (_name, _city, _country);
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION update_station(
    _id INT,
    _name VARCHAR(50),
    _city VARCHAR(30),
    _country VARCHAR(30)
) RETURNS VOID AS $$
BEGIN
    UPDATE station SET name = _name, city = _city, country = _country WHERE id = _id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION delete_station(
    _id INT
) RETURNS VOID AS $$
BEGIN
    DELETE FROM station WHERE id = _id;
END;
$$ LANGUAGE plpgsql;



/* Route */
CREATE OR REPLACE FUNCTION add_route(
    _name VARCHAR(50),
    _departure_station_id INT,
    _arrival_station_id INT
) RETURNS VOID AS $$
BEGIN
    INSERT INTO route (name, departure_station_id, arrival_station_id) 
    VALUES (_name, _departure_station_id, _arrival_station_id);
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION update_route(
    _id INT,
    _name VARCHAR(50),
    _departure_station_id INT,
    _arrival_station_id INT
) RETURNS VOID AS $$
BEGIN
    UPDATE route SET 
    name = _name, 
    departure_station_id = _departure_station_id, 
    arrival_station_id = _arrival_station_id
    WHERE id = _id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION delete_route(
    _id INT
) RETURNS VOID AS $$
BEGIN
    DELETE FROM route WHERE id = _id;
END;
$$ LANGUAGE plpgsql;



/* Train */
CREATE OR REPLACE FUNCTION add_train(
    _route_id INT,
    _name VARCHAR(30),
    _type VARCHAR(30),
    _railcar_capacity INT,
    _railcars_amount INT,
    _first_class_price INT,
    _second_class_price INT
) RETURNS VOID AS $$
BEGIN
    INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price) 
    VALUES (_route_id, _name, _type, _railcar_capacity, _railcars_amount, _first_class_price, _second_class_price);
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION update_train(
    _id INT,
    _route_id INT,
    _name VARCHAR(30),
    _type VARCHAR(30),
    _railcar_capacity INT,
    _railcars_amount INT,
    _first_class_price INT,
    _second_class_price INT
) RETURNS VOID AS $$
BEGIN
    UPDATE train SET 
    route_id = _route_id, 
    name = _name, 
    type = _type, 
    railcar_capacity = _railcar_capacity, 
    railcars_amount = _railcars_amount, first_class_price = _first_class_price, second_class_price = _second_class_price 
    WHERE id = _id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION delete_train(
    _id INT
) RETURNS VOID AS $$
BEGIN
    DELETE FROM train WHERE id = _id;
END;
$$ LANGUAGE plpgsql;






/* Schedule */
CREATE OR REPLACE FUNCTION add_schedule(
    route_id INTEGER,
    train_id INTEGER,
    departure_date TIMESTAMP,
    arrival_date TIMESTAMP
)
RETURNS VOID AS $$
BEGIN
    INSERT INTO schedule(route_id, train_id, departure_date, arrival_date)
    VALUES(route_id, train_id, departure_date, arrival_date);
END;
$$ LANGUAGE plpgsql;


CREATE OR REPLACE FUNCTION update_schedule(
    schedule_id INTEGER,
    new_route_id INT,
    new_train_id INT,
    new_departure_date TIMESTAMP,
    new_arrival_date TIMESTAMP
)
RETURNS VOID AS $$
BEGIN
    UPDATE schedule
    SET departure_date = new_departure_date, 
    arrival_date = new_arrival_date,
    route_id = new_route_id,
    train_id = new_train_id
    WHERE id = schedule_id;
END;
$$ LANGUAGE plpgsql;


CREATE OR REPLACE FUNCTION delete_schedule(
    schedule_id INTEGER
)
RETURNS VOID AS $$
BEGIN
    DELETE FROM schedule
    WHERE id = schedule_id;
END;
$$ LANGUAGE plpgsql;





/* Ticket */
CREATE OR REPLACE FUNCTION add_ticket(
  p_schedule_id INT,
  p_passenger_id INT,
  p_seat_no INT,
  p_railcar_no SMALLINT,
  p_railcar_class SMALLINT
)
RETURNS VOID AS
$$
BEGIN
  INSERT INTO ticket (schedule_id, passenger_id, seat_no, railcar_no, railcar_class)
  VALUES (p_schedule_id, p_passenger_id, p_seat_no, p_railcar_no, p_railcar_class);
END;
$$
LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION update_ticket(
  p_id INT,
  p_schedule_id INT,
  p_passenger_id INT,
  p_seat_no INT,
  p_railcar_no SMALLINT,
  p_railcar_class SMALLINT
)
RETURNS VOID AS
$$
BEGIN
  UPDATE ticket
  SET schedule_id = p_schedule_id,
      passenger_id = p_passenger_id,
      seat_no = p_seat_no,
      railcar_no = p_railcar_no,
      railcar_class = p_railcar_class
  WHERE id = p_id;
END;
$$
LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION delete_ticket(p_id INT)
RETURNS VOID AS
$$
BEGIN
  DELETE FROM ticket WHERE id = p_id;
END;
$$
LANGUAGE plpgsql;







/* Passenger */

CREATE OR REPLACE FUNCTION add_passenger(
  p_first_name VARCHAR(30),
  p_middle_name VARCHAR(30),
  p_last_name VARCHAR(30),
  p_passport_serial_no SMALLINT,
  p_passport_code INT
)
RETURNS VOID AS
$$
BEGIN
  INSERT INTO passenger (first_name, middle_name, last_name, passport_serial_no, passport_code)
  VALUES (p_first_name, p_middle_name, p_last_name, p_passport_serial_no, p_passport_code);
END;
$$
LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION update_passenger(
  p_id INT,
  p_first_name VARCHAR(30),
  p_middle_name VARCHAR(30),
  p_last_name VARCHAR(30),
  p_passport_serial_no SMALLINT,
  p_passport_code INT
)
RETURNS VOID AS
$$
BEGIN
  UPDATE passenger
  SET first_name = p_first_name,
      middle_name = p_middle_name,
      last_name = p_last_name,
      passport_serial_no = p_passport_serial_no,
      passport_code = p_passport_code
  WHERE id = p_id;
END;
$$
LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION delete_passenger(p_id INT)
RETURNS VOID AS
$$
BEGIN
  DELETE FROM passenger WHERE id = p_id;
END;
$$
LANGUAGE plpgsql;