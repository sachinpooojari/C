FILE = stud_add.o student_dbms.o stud_del.c
output :${FILE}
	cc ${FILE} -o $@
stud_add.o: stud_add.c 
	cc -c  stud_add.c 
student_dbms.o: student_dbms.c
	cc -c student_dbms.c
stud_del.o: stud_del.c
	cc -c stud_del.c

