REVOKE ALL PRIVILEGES ON TABLE ticket, passenger, station, route, train, schedule FROM worker_role;
REVOKE ALL PRIVILEGES ON TABLE ticket, passenger FROM admin_role;

DROP ROLE admin_role;
DROP ROLE worker_role;

CREATE ROLE admin_role WITH LOGIN PASSWORD 'a' SUPERUSER;
CREATE ROLE worker_role WITH LOGIN PASSWORD 'w';

GRANT SELECT, INSERT, UPDATE, DELETE ON ticket TO worker_role;
GRANT SELECT, USAGE ON SEQUENCE ticket_id_seq TO worker_role;
GRANT SELECT, INSERT, UPDATE, DELETE ON passenger TO worker_role;
GRANT SELECT ON station, route, train, schedule TO worker_role;