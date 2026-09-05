







a.out:stud_main.o stud_add.o stud_del.o stud_display.o stud_mod.o stud_save.o stud_sort.o delete_all.o reverse_data.o
	cc stud_main.o stud_add.o stud_del.o stud_display.o stud_mod.o stud_save.o stud_sort.o delete_all.o reverse_data.o -o a.out
stud_main.o:stud_main.c
	cc -c stud_main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_display.o:stud_display.c
	cc -c stud_display.c
stud_mod.o:stud_mod.c
	cc -c stud_mod.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_sort.o:stud_sort.c
	cc -c stud_sort.c
delete_all.o:delete_all.c
	cc -c delete_all.c
reverse_data.o:reverse_data.c
	cc -c reverse_data.c
clear:
	@echo "cleaning up"
	@rm -vr *.o





