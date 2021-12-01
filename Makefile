CFLAGS = -Wall -g

clean:
	rm -f *.o *.so connections

all: my_mat.so connections

connections: main.o my_mat.so
	gcc $(CFLAGS) -o connections main.o my_mat.so

main.o: main.c my_mat.h
	gcc $(CFLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	gcc $(CFLAGS) -c my_mat.c -lm

my_mat.so: my_mat.o
	gcc -shared my_mat.o -o my_mat.so