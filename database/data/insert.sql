INSERT INTO station(name, city, country) VALUES ('Рязань-1', 'Рязань', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Рязань-2', 'Рязань', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Казанский вокзал', 'Москва', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Анапа', 'Анапа', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Челябинск-Главный', 'Челябинс', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Екатеринбург-Пасс.', 'Екатеринбург', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Липецк', 'Липецк', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Симферополь-Пасс.', 'Симферопль', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Йошкар-Ола', 'Йошкар-Ола', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Саранск-1', 'Саранск', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Грозный', 'Грозный', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Казань-Пасс.', 'Казань', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Самара', 'Самара', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Чебоксары', 'Чебоксары', 'Россия');
INSERT INTO station(name, city, country) VALUES ('Нижний Новгород (Московский вокзал)', 'Нижний Новгород', 'Россия');




INSERT INTO route (name, departure_station_id,arrival_station_id) VALUES('Москва — Анапа', 1, 2);
INSERT INTO route (name, departure_station_id,arrival_station_id) VALUES('Маршрут — Маршрут', 3, 4);
INSERT INTO route (name, departure_station_id,arrival_station_id) VALUES('Маршрут', 3, 4);




INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price) 
    VALUES (1, '705Ж', 'пассажирский', 150, 9, 1100, 700);
INSERT INTO train (route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price) 
VALUES (2, '705Жsdf', 'пассажирский', 150, 9, 1100, 700);


INSERT INTO schedule(route_id, train_id, departure_date, arrival_date)
VALUES(1, 1, CURRENT_TIMESTAMP, to_timestamp(123123123123));
INSERT INTO schedule(route_id, train_id, departure_date, arrival_date)
VALUES(1, 2, CURRENT_TIMESTAMP, to_timestamp(123123123123));