myexe:  prog1.o myMath.a
	gcc prog1.o -o myexe -lmyMath -L .
myMath.a: myAdd.o myDiv.o mySub.o
	ar -rs libmyMath.a myAdd.o myDiv.o mySub.o
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
