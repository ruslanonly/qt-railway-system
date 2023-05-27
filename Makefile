all:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop_view.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/schema.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/index.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/view.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/trigger.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/data/insert.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop_funcs.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/funcs.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/get_funcs.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/roles.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/transaction.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/cursor.sql
	
roles:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/roles.sql

trigger:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/trigger.sql
	
transaction:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/transaction.sql

drop:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop.sql

schema:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop.sql
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/schema.sql

population:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/population.sql

funcs:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/funcs.sql

get_funcs:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/get_funcs.sql

select_funcs:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/select_funcs.sql

drop_funcs:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/drop_funcs.sql

insert:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/data/insert.sql

insert_funcs:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/data/insert_funcs.sql

delete_all:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/data/delete_all.sql

view:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/view.sql

index:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/index.sql

cursor:
	docker exec -it application-db-1 psql -U rw_user -d railway -f /home/database/cursor.sql
