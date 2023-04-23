drop:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop.sql

schema:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/schema.sql

population:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/population.sql

procedures:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/procedures.sql

drop_procedures:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop_procedures.sql