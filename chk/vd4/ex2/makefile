myexe:  mySub.o myDiv.o myAdd.o prog1.o
	gcc *.o -o myexe 
prog1.o:prog1.c myMath.h
	gcc -c prog1.c -I .
myAdd.o:myAdd.c
	gcc -c myAdd.c
myDiv.o:myDiv.c
	gcc -c myDiv.c
mySub.o:mySub.c
	gcc -c mySub.c
clear:
	-@rm -f *.o
install:
	@cp myexe /usr/bin
	@echo "Successfully Installed"
uninstall:
	@rm -f /usr/bin/myexe
	@echo "Uninstalled"
