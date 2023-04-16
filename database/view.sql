CREATE VIEW ticket_info AS
SELECT ticket.id, route.name AS route_name, train.name AS train_name, passenger.first_name, passenger.last_name, ticket.seat_no, ticket.railcar_class,
CASE
  WHEN ticket.railcar_class = 1 THEN train.first_class_price
  WHEN ticket.railcar_class = 2 THEN train.second_class_price
END AS ticket_price
FROM ticket
INNER JOIN route ON ticket.route_id = route.id
INNER JOIN train ON ticket.train_id = train.id
INNER JOIN passenger ON passenger.id = ticket.passenger_id;