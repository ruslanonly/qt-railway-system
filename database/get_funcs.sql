DROP FUNCTION get_available_seats;

CREATE OR REPLACE FUNCTION get_available_seats(in_schedule_id INT, in_railcar_no INT)
RETURNS TABLE (seat_no INT) AS $$
BEGIN
  RETURN QUERY
  SELECT seats.seat_no
  FROM generate_series(1, (SELECT railcar_capacity FROM train WHERE id = (SELECT train_id FROM schedule WHERE id = in_schedule_id))) AS seats(seat_no)
  WHERE NOT EXISTS (
    SELECT 1
    FROM ticket t
    WHERE t.schedule_id = in_schedule_id
    AND t.railcar_no = in_railcar_no
    AND t.seat_no = seats.seat_no
  );
END;
$$ LANGUAGE plpgsql;




DROP FUNCTION get_all_railcar_numbers;
CREATE OR REPLACE FUNCTION get_all_railcar_numbers(schedule_id INT)
RETURNS TABLE(railcar_no INT) AS $$
BEGIN
    RETURN QUERY SELECT railcars.railcar_no
        FROM generate_series(1, (SELECT railcars_amount FROM train WHERE id = (SELECT train_id FROM schedule WHERE id = schedule_id))) AS railcars(railcar_no);
END;
$$ LANGUAGE plpgsql;