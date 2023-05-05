REVOKE ALL PRIVILEGES ON TABLE ticket, passenger, station, route, train, schedule FROM w_r;
REVOKE ALL PRIVILEGES ON TABLE ticket, passenger FROM a_r;

DROP ROLE a_r;
DROP ROLE w_r;

CREATE ROLE a_r WITH LOGIN PASSWORD 'a' SUPERUSER;
CREATE ROLE w_r WITH LOGIN PASSWORD 'w';

GRANT SELECT, INSERT, UPDATE, DELETE ON ticket TO w_r;
GRANT SELECT, USAGE ON SEQUENCE ticket_id_seq TO w_r;
GRANT SELECT, INSERT, UPDATE, DELETE ON passenger TO w_r;
GRANT SELECT ON station, route, train, schedule TO w_r;