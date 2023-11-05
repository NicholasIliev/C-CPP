# The first rule is executed when the command make is typed in the local folder:
all: prog

# executable deps and command to build it:
prog: main.o module1.o module2.o
	gcc main.o module1.o module2.o -o prog

# network.o deps and command to build it:
module1.o: module1.c module1.h
	gcc -c module1.c -o module1.o

module2.o: module2.c module2.h
	gcc -c module2.c -o module2.o

main.o: main.c module1.h module2.h
	gcc -c main.c -o main.o

# Special rule to remove all build files
clean:
	rm -rf *.o prog
