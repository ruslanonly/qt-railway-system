-- INSERT INTO station(name, city, country) VALUES ('Рязань-1', 'Рязань', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Рязань-2', 'Рязань', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Казанский вокзал', 'Москва', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Анапа', 'Анапа', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Челябинск-Главный', 'Челябинс', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Екатеринбург-Пасс.', 'Екатеринбург', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Липецк', 'Липецк', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Симферополь-Пасс.', 'Симферопль', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Йошкар-Ола', 'Йошкар-Ола', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Саранск-1', 'Саранск', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Грозный', 'Грозный', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Казань-Пасс.', 'Казань', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Самара', 'Самара', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Чебоксары', 'Чебоксары', 'Россия');
-- INSERT INTO station(name, city, country) VALUES ('Нижний Новгород (Московский вокзал)', 'Нижний Новгород', 'Россия');




-- INSERT INTO route (name, departure_station_id,arrival_station_id) VALUES('Москва — Анапа', 1, 2);
-- INSERT INTO route (name, departure_station_id,arrival_station_id) VALUES('Маршрут — Маршрут', 3, 4);
-- INSERT INTO route (name, departure_station_id,arrival_station_id) VALUES('Маршрут', 3, 4);




-- INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price) 
--     VALUES (1, '705Ж', 'пассажирский', 150, 9, 1100, 700);
-- INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price) 
-- VALUES (2, '705Жsdf', 'пассажирский', 150, 9, 1100, 700);


-- INSERT INTO schedule(route_id, train_id, departure_date, arrival_date)
-- VALUES(1, 1, CURRENT_TIMESTAMP, to_timestamp(123123123123));
-- INSERT INTO schedule(route_id, train_id, departure_date, arrival_date)
-- VALUES(1, 2, CURRENT_TIMESTAMP, to_timestamp(123123123123));

INSERT INTO station (name, city, country) VALUES
  ('Moscow', 'Moscow', 'Russia'),
  ('St. Petersburg', 'St. Petersburg', 'Russia'),
  ('Kazan', 'Kazan', 'Russia'),
  ('Novosibirsk', 'Novosibirsk', 'Russia'),
  ('Yekaterinburg', 'Yekaterinburg', 'Russia');

INSERT INTO route (name, departure_station_id, arrival_station_id) VALUES
  ('Moscow - St. Petersburg', 1, 2),
  ('Moscow - Kazan', 1, 3),
  ('Moscow - Novosibirsk', 1, 4),
  ('St. Petersburg - Kazan', 2, 3),
  ('St. Petersburg - Novosibirsk', 2, 4);

-- -- Insert data into the train table
INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price) VALUES
  (1, 'Sapsan', 'скоростной-пассажирский', 64, 10, 5000, 2500),
  (2, 'Strizh', 'скорый-пассажирский', 56, 15, 4000, 2000),
  (3, 'Rossiya', 'пассажирский', 72, 12, 3000, 1500),
  (4, 'Red Arrow', 'скорый-пассажирский', 48, 20, 3500, 1750),
  (5, 'Baikal', 'пассажирский', 64, 8, 3500, 1750);

-- -- Insert data into the schedule table
INSERT INTO schedule (route_id, train_id, departure_date, arrival_date) VALUES
  (1, 1, '2023-05-10 08:00:00', '2023-05-10 13:00:00'),
  (2, 2, '2023-05-12 09:30:00', '2023-05-12 16:00:00'),
  (3, 3, '2023-05-14 12:00:00', '2023-05-16 16:30:00'),
  (4, 4, '2023-05-16 10:00:00', '2023-05-17 14:30:00'),
  (5, 5, '2023-05-18 15:00:00', '2023-05-20 19:30:00');

INSERT INTO passenger (first_name, middle_name, last_name, passport_serial_no, passport_code)
VALUES
  ('Иван', 'Петрович', 'Сидоров', 1234, 567890),
  ('Мария', 'Ивановна', 'Кузнецова', 5678, 123456),
  ('Петр', 'Сергеевич', 'Иванов', 4321, 987654),
  ('Елена', 'Дмитриевна', 'Козлова', 8765, 456789),
  ('Дмитрий', 'Александрович', 'Соколов', 2468, 135790);

INSERT INTO ticket (schedule_id, passenger_id, seat_no, railcar_no, railcar_class)
VALUES
  (1, 1, 12, 1, 1),
  (2, 2, 7, 2, 2),
  (3, 3, 23, 1, 2),
  (4, 4, 16, 3, 1),
  (5, 5, 3, 4, 2);
