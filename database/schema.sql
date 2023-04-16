
CREATE TABLE station (
  id SERIAL,
  name VARCHAR(30) NOT NULL,
  city VARCHAR(30) NOT NULL,
  country VARCHAR(30) NOT NULL,
  PRIMARY KEY (id)
);

CREATE TABLE route (
  id SERIAL,
  name VARCHAR(30),
  departure_station_id INT NOT NULL,
  arrival_station_id INT NOT NULL,
  departure_date TIMESTAMP,
  arrival_date TIMESTAMP,
  PRIMARY KEY (id),
  CONSTRAINT departure_station_fk FOREIGN KEY(departure_station_id) REFERENCES station(id),
  CONSTRAINT arrival_station_fk FOREIGN KEY(arrival_station_id) REFERENCES station(id),
  CHECK (departure_date < arrival_date)
);

CREATE TABLE train (
  id SERIAL,
  route_id INT NOT NULL,
  name VARCHAR(30),
  type VARCHAR(30),
  railcar_capacity INT,
  railcars_amount INT NOT NULL ,
  first_class_price INT,
  second_class_price INT,
  PRIMARY KEY (id),
  CONSTRAINT route_fk FOREIGN KEY(route_id) REFERENCES route(id),
  CHECK (railcar_capacity BETWEEN 1 AND 200),
  CHECK (first_class_price > 0 AND second_class_price > 0)
);

CREATE TABLE ticket (
  id SERIAL,
  route_id INT NOT NULL,
  train_id INT NOT NULL,
  seat_no INT NOT NULL,
  railcal_no SMALLINT NOT NULL,
  railcar_class SMALLINT NOT NULL,
  PRIMARY KEY (id),
  CONSTRAINT route_fk FOREIGN KEY(route_id) REFERENCES route(id),
  CONSTRAINT train_fk FOREIGN KEY(train_id) REFERENCES train(id),
  CHECK (railcar_class = 1 OR railcar_class = 2) 
);

CREATE TABLE passenger (
  id SERIAL,
  first_name VARCHAR(30) NOT NULL,
  middle_name VARCHAR(30) NOT NULL,
  last_name VARCHAR(30) NOT NULL,
  passport_serial_no SMALLINT NOT NULL,
  passport_code INT NOT NULL,
  PRIMARY KEY (id),
  CHECK (passport_serial_no BETWEEN 1000 AND 9999),
  CHECK (passport_code BETWEEN 100000 AND 999999)
);