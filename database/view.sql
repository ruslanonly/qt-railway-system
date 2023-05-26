DROP VIEW schedule_view;
CREATE OR REPLACE VIEW schedule_view AS SELECT 
  sch.id as schedule_id, 
  r.name AS route_name,
  t.name AS train_name, 
  t.type AS train_type, 
  t.first_class_price AS train_first_class_price,
  t.second_class_price AS train_second_class_price,
  sch.departure_date AS schedule_departure_date, --
  sch.arrival_date AS schedule_arrival_date,
  CASE 
    WHEN CURRENT_TIMESTAMP < sch.departure_date THEN 'не выполнен'
    WHEN CURRENT_TIMESTAMP >= sch.departure_date AND CURRENT_TIMESTAMP <= sch.arrival_date THEN 'выполняется'
    WHEN CURRENT_TIMESTAMP > sch.arrival_date THEN 'выполнен'
  END as completed_status
FROM schedule sch
JOIN route r ON sch.route_id = r.id
JOIN train t ON sch.train_id = t.id;

DROP FUNCTION insert_schedule_view;
CREATE OR REPLACE FUNCTION insert_schedule_view() RETURNS TRIGGER AS $$
DECLARE
  v_route_id INTEGER;  
  v_train_id INTEGER;
BEGIN

  SELECT id INTO v_route_id FROM route r WHERE r.name = NEW.route_name;
  IF (v_route_id = NULL) THEN
    RAISE EXCEPTION 'Маршрут с заданным именем не найден';
  END IF;

  SELECT id INTO v_train_id FROM train tr WHERE tr.name = NEW.train_name;
  IF (v_train_id = NULL) THEN
    RAISE EXCEPTION 'Поезд с заданным именем не найден';
  END IF;

  PERFORM add_schedule(v_route_id, v_train_id, NEW.schedule_departure_date, NEW.schedule_arrival_date);

  RETURN NULL;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE TRIGGER insert_schedule_view_on_insert
INSTEAD OF INSERT ON schedule_view
FOR EACH ROW EXECUTE FUNCTION insert_schedule_view();

DROP FUNCTION update_schedule_view;
CREATE OR REPLACE FUNCTION update_schedule_view() RETURNS TRIGGER AS $$
DECLARE
  v_route_id INTEGER;  
  v_train_id INTEGER;
BEGIN
  SELECT route_id, train_id INTO v_route_id, v_train_id 
  FROM schedule WHERE id = NEW.schedule_id;

  UPDATE schedule
  SET departure_date = NEW.schedule_departure_date,
      arrival_date = NEW.schedule_arrival_date
  WHERE id = NEW.schedule_id;

  UPDATE train
  SET name = NEW.train_name,
  type = NEW.train_type,
  first_class_price = NEW.train_first_class_price,
  second_class_price = NEW.train_second_class_price
  WHERE id = v_train_id;

  UPDATE route
  SET name = NEW.route_name
  WHERE id = v_route_id;

  RETURN NULL;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE TRIGGER update_schedule_view_on_update
INSTEAD OF UPDATE ON schedule_view
FOR EACH ROW EXECUTE FUNCTION update_schedule_view();





DROP FUNCTION delete_schedule_view;
CREATE OR REPLACE FUNCTION delete_schedule_view()
RETURNS TRIGGER
LANGUAGE plpgsql AS $$
DECLARE 
	
BEGIN
	DELETE FROM schedule
  WHERE id = OLD.schedule_id;
	RETURN NULL;
END;
$$;

CREATE OR REPLACE TRIGGER delete_schedule_view_on_delete
INSTEAD OF DELETE
ON schedule_view
FOR EACH ROW
EXECUTE PROCEDURE delete_schedule_view();