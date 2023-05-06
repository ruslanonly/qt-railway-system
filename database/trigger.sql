CREATE OR REPLACE FUNCTION update_train_status() RETURNS TRIGGER AS $$
DECLARE
  total_seats INTEGER;
  booked_seats INTEGER;
  available_seats INTEGER;
BEGIN
  SELECT t.railcar_capacity * t.railcars_amount INTO total_seats FROM train t
  WHERE t.id = (SELECT s.train_id FROM schedule s
                JOIN ticket ti ON ti.schedule_id = s.id
                WHERE ti.id = NEW.id);

  SELECT COUNT(*) INTO booked_seats FROM ticket ti
  WHERE ti.schedule_id = NEW.schedule_id;

  available_seats := total_seats - booked_seats;

  IF available_seats = 0 THEN
    UPDATE schedule s SET status = 'нет мест' WHERE s.id = NEW.schedule_id OR s.id = OLD.schedule_id;
  ELSIF available_seats < total_seats * 0.1 THEN
    UPDATE schedule s SET status = 'осталось мало мест' WHERE s.id = NEW.schedule_id OR s.id = OLD.schedule_id;
  ELSE
    UPDATE schedule s SET status = 'есть места' WHERE s.id = NEW.schedule_id OR s.id = OLD.schedule_id;
  END IF;

  RETURN NEW;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE TRIGGER update_train_status_on_ticket_changes
AFTER INSERT OR UPDATE OR DELETE ON ticket
FOR EACH ROW
EXECUTE FUNCTION update_train_status();