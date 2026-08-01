#target: all dependency .o files need to proove
#<tabspace>command to compile .o file
#target .o file: dependency .c file
#<tabspace>command to get .o file
######################################################

CC = cc
target = stud_main.o stud_add.o stud_others.o stud_show.o stud_del.o stud_mod.o stud_save.o

exe: $(target)
	$(CC) $(target) -o exe

stud_main.o: stud_main.c
	$(CC) -c stud_main.c

stud_add.o: stud_add.c
	$(CC) -c stud_add.c

stud_others.o: stud_others.c
	$(CC) -c stud_others.c

stud_show.o: stud_show.c
	$(CC) -c stud_show.c
	     
stud_del.o: stud_del.c
	$(CC) -c stud_del.c

stud_mod.o: stud_mod.c
	$(CC) -c stud_mod.c

stud_save.o: stud_save.c
	$(CC) -c stud_save.c

clear:
	@echo "clearing .o files"
	@rm -r *.o
