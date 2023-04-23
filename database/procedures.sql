/* Station */
CREATE OR REPLACE PROCEDURE add_station(
  name_in VARCHAR(30),
  city_in VARCHAR(30),
  country_in VARCHAR(30)
)
LANGUAGE plpgsql
AS $$
BEGIN
  INSERT INTO station (name, city, country) VALUES (name_in, city_in, country_in);
END;
$$;

CREATE OR REPLACE PROCEDURE update_station(
  p_id INT,
  p_name VARCHAR(30),
  p_city VARCHAR(30),
  p_country VARCHAR(30)
)
AS $$
BEGIN
  UPDATE station
  SET name = p_name, city = p_city, country = p_country
  WHERE id = p_id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE PROCEDURE delete_station(delete_id INT)
AS $$
BEGIN
  DELETE FROM station WHERE id = delete_id;
END;
$$ LANGUAGE plpgsql;




/* Route */
CREATE OR REPLACE PROCEDURE add_route(
  name_in VARCHAR(30),
  departure_station_id_in INT,
  arrival_station_id_in INT,
  departure_date_in TIMESTAMP,
  arrival_date_in TIMESTAMP
)
LANGUAGE plpgsql
AS $$
BEGIN
  INSERT INTO route (name, departure_station_id, arrival_station_id, departure_date, arrival_date)
  VALUES (name_in, departure_station_id_in, arrival_station_id_in, departure_date_in, arrival_date_in);
END;
$$;

CREATE OR REPLACE PROCEDURE update_route(
  p_id INT,
  p_name VARCHAR(30),
  p_departure_station_id INT,
  p_arrival_station_id INT,
  p_departure_date TIMESTAMP,
  p_arrival_date TIMESTAMP
)
AS $$
BEGIN
  UPDATE route
  SET name = p_name, departure_station_id = p_departure_station_id,
    arrival_station_id = p_arrival_station_id, departure_date = p_departure_date,
    arrival_date = p_arrival_date
  WHERE id = p_id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE PROCEDURE delete_route(delete_id INT)
AS $$
BEGIN
  DELETE FROM route WHERE id = delete_id;
END;
$$ LANGUAGE plpgsql;






/* Train */
CREATE OR REPLACE PROCEDURE add_train(
  route_id_in INT,
  name_in VARCHAR(30),
  type_in VARCHAR(30),
  railcar_capacity_in INT,
  railcars_amount_in INT,
  first_class_price_in INT,
  second_class_price_in INT
)
LANGUAGE plpgsql
AS $$
BEGIN
  INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price)
  VALUES (route_id_in, name_in, type_in, railcar_capacity_in, railcars_amount_in, first_class_price_in, second_class_price_in);
END;
$$;

CREATE OR REPLACE PROCEDURE update_train(
  p_id INT,
  p_route_id INT,
  p_name VARCHAR(30),
  p_type VARCHAR(30),
  p_railcar_capacity INT,
  p_railcars_amount INT,
  p_first_class_price INT,
  p_second_class_price INT
)
AS $$
BEGIN
  UPDATE train
  SET route_id = p_route_id, name = p_name, type = p_type,
    railcar_capacity = p_railcar_capacity, railcars_amount = p_railcars_amount,
    first_class_price = p_first_class_price, second_class_price = p_second_class_price
  WHERE id = p_id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE PROCEDURE delete_train(delete_id INT)
AS $$
BEGIN
  DELETE FROM train WHERE id = delete_id;
END;
$$ LANGUAGE plpgsql;








/* Ticket */
CREATE OR REPLACE PROCEDURE add_ticket(
  route_id_in INT,
  train_id_in INT,
  seat_no_in INT,
  railcal_no_in SMALLINT,
  railcar_class_in SMALLINT
)
LANGUAGE plpgsql
AS $$
BEGIN
  INSERT INTO ticket (route_id, train_id, seat_no, railcal_no, railcar_class)
  VALUES (route_id_in, train_id_in, seat_no_in, railcal_no_in, railcar_class_in);
END;
$$;

CREATE OR REPLACE PROCEDURE update_ticket(
  p_id INT,
  p_route_id INT,
  p_train_id INT,
  p_seat_no INT,
  p_railcal_no SMALLINT,
  p_railcar_class SMALLINT
)
AS $$
BEGIN
  UPDATE ticket
  SET route_id = p_route_id, train_id = p_train_id, seat_no = p_seat_no,
    railcal_no = p_railcal_no, railcar_class = p_railcar_class
  WHERE id = p_id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE PROCEDURE delete_ticket(delete_id INT)
AS $$
BEGIN
  DELETE FROM ticket WHERE id = delete_id;
END;
$$ LANGUAGE plpgsql;








/* Passenger */
CREATE OR REPLACE PROCEDURE add_passenger(
  first_name_in VARCHAR(30),
  middle_name_in VARCHAR(30),
  last_name_in VARCHAR(30),
  passport_serial_no_in SMALLINT,
  passport_code_in INT
)
LANGUAGE plpgsql
AS $$
BEGIN
  INSERT INTO passenger (first_name, middle_name, last_name, passport_serial_no, passport_code)
  VALUES (first_name_in, middle_name_in, last_name_in, passport_serial_no_in, passport_code_in);
END;
$$;

CREATE OR REPLACE PROCEDURE update_passenger(
  p_id INT,
  p_first_name VARCHAR(30),
  p_middle_name VARCHAR(30),
  p_last_name VARCHAR(30),
  p_passport_serial_no SMALLINT,
  p_passport_code INT
)
AS $$
BEGIN
  UPDATE passenger
  SET first_name = p_first_name, middle_name = p_middle_name,
    last_name = p_last_name, passport_serial_no = p_passport_serial_no,
    passport_code = p_passport_code
  WHERE id = p_id;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE PROCEDURE delete_passenger(delete_id INT)
AS $$
BEGIN
  DELETE FROM passenger WHERE id = delete_id;
END;
$$ LANGUAGE plpgsql;