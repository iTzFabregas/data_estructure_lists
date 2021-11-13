all:
	gcc -o LDED.o -c LDED.c
	gcc -o main.o -c main.c
	gcc -o exec LDED.o main.o

run:
	./exec

clean:
	del *.o