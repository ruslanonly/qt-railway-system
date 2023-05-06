
CREATE TABLE station (
  id SERIAL,
  name VARCHAR(50) NOT NULL UNIQUE,
  city VARCHAR(30) NOT NULL,
  country VARCHAR(30) NOT NULL,
  PRIMARY KEY (id)
);

CREATE TABLE route (
  id SERIAL,
  name VARCHAR(50) UNIQUE NOT NULL,
  departure_station_id INT NOT NULL,
  arrival_station_id INT NOT NULL,
  PRIMARY KEY (id),
  CONSTRAINT departure_station_fk FOREIGN KEY(departure_station_id) REFERENCES station(id),
  CONSTRAINT arrival_station_fk FOREIGN KEY(arrival_station_id) REFERENCES station(id),
  CONSTRAINT unique_route_group_fk UNIQUE(departure_station_id, arrival_station_id),
  CHECK (departure_station_id != arrival_station_id)
);

CREATE TABLE train (
  id SERIAL,
  route_id INT NOT NULL,
  name VARCHAR(30) UNIQUE NOT NULL,
  type VARCHAR(30),
  railcar_capacity INT NOT NULL,
  railcars_amount INT NOT NULL ,
  first_class_price INT NOT NULL,
  second_class_price INT NOT NULL,
  PRIMARY KEY (id),
  CONSTRAINT route_fk FOREIGN KEY(route_id) REFERENCES route(id),
  CHECK (railcar_capacity BETWEEN 1 AND 200),
  CHECK (railcars_amount > 0),
  CHECK (first_class_price > 0 AND second_class_price > 0),
  CHECK (type IN ('скоростной-пассажирский', 'скорый-пассажирский', 'пассажирский'))
);

CREATE TABLE schedule (
  id SERIAL,
  route_id INT NOT NULL,
  train_id INT NOT NULL,
  departure_date TIMESTAMP NOT NULL,
  arrival_date TIMESTAMP NOT NULL,
  status VARCHAR(20) NOT NULL DEFAULT 'есть места',
  PRIMARY KEY (id),
  CONSTRAINT route_fk FOREIGN KEY(route_id) REFERENCES route(id),
  CONSTRAINT train_fk FOREIGN KEY(train_id) REFERENCES train(id),
  CONSTRAINT unique_schedule_group_fk UNIQUE(route_id, train_id, departure_date, arrival_date),
  CHECK (departure_date < arrival_date),
  CHECK (status IN ('осталось мало мест', 'есть места', 'нет мест'))
);

CREATE TABLE passenger (
  id SERIAL,
  first_name VARCHAR(30) NOT NULL,
  middle_name VARCHAR(30) NOT NULL,
  last_name VARCHAR(30) NOT NULL,
  passport_serial_no SMALLINT NOT NULL,
  passport_code INT NOT NULL,
  PRIMARY KEY (id),
  CONSTRAINT unique_passport_group_fk UNIQUE(passport_serial_no, passport_code),
  CHECK (passport_serial_no BETWEEN 1000 AND 9999),
  CHECK (passport_code BETWEEN 100000 AND 999999)
);

CREATE TABLE ticket (
  id SERIAL,
  schedule_id INT NOT NULL,
  passenger_id INT NOT NULL,
  seat_no INT NOT NULL,
  railcar_no SMALLINT NOT NULL,
  railcar_class SMALLINT NOT NULL,
  PRIMARY KEY (id),
  CONSTRAINT schedule_fk FOREIGN KEY(schedule_id) REFERENCES schedule(id),
  CONSTRAINT passenger_fk FOREIGN KEY(passenger_id) REFERENCES passenger(id),
  CONSTRAINT unique_ticket_group_fk UNIQUE(schedule_id, seat_no, railcar_no),
  CHECK (railcar_class = 1 OR railcar_class = 2)
);
