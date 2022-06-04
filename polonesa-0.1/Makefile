default: polonesa

OBJ = main.o getop.o stack.o getch.o

CC = gcc
CFLAGS = -Wall -x c -g -std=c99 -pedantic-errors

polonesa: $(OBJ)
	$(CC) -o polonesa.exe $(OBJ)

clean:
	rm -rf *.o *.exe *~ 
