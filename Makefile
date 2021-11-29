CFLAGS = -Wall -g

clean:
	rm -f *.o connections 

all: connections

prog: main.o my_mat.o
	gcc $(CFLAGS) -o connections main.o my_mat.o

main.o: main.c my_mat.h
	gcc $(CFLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	gcc $(CFLAGS) -c my_mat.c -lm