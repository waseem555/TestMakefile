CC=gcc
CFLAGS=-I.

main: main.o prime.o gcd.o
	$(CC) -o main main.o prime.o gcd.o -lm 

clean:
	rm -rf *.o
	rm -rf main
