all:myexe
myexe:  mySub.o myDiv.o myAdd.o prog1.o ./d1/mymod.o
	gcc *.o ./d1/mymod.o -o myexe 
prog1.o:prog1.c myMath.h ./d1/mymod.h
	gcc -c prog1.c -I . -I ./d1/
myAdd.o:myAdd.c
	gcc -c myAdd.c
myDiv.o:myDiv.c
	gcc -c myDiv.c
mySub.o:mySub.c
	gcc -c mySub.c
include: ./d1/makefile
clear:
	-@rm -f *.o
install:
	@cp myexe /usr/bin
	@echo "Successfully Installed"
uninstall:
	@rm -f /usr/bin/myexe
	@echo "Uninstalled"
