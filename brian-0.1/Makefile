default: truques f2c f2c-constants \
  copy1 copy2 count-c \
  count-lines count-words count-digits

CFLAGS=-Wall -x c -g -std=c99 -pedantic-errors

truques: truques.o quantos.o
	gcc -o truques truques.o quantos.o

quantos.o:
	gcc -c quantos.c

truques.o: 
	gcc -c truques.c

f2c: f2c.o
	gcc -o f2c f2c.o

f2c.o: f2c.c
	gcc $(CFLAGS) -c f2c.c

f2c-constants: f2c-constants.o
	gcc -o f2c-constants f2c-constants.o

f2c-constants.o: f2c-constants.c
	gcc $(CFLAGS) -c f2c-constants.c

copy1: copy1.o
	gcc -o copy1 copy1.o

copy1.o: copy1.c
	gcc $(CFLAGS) -c copy1.c

copy2: copy2.o
	gcc -o copy2 copy2.o

copy2.o: copy2.c
	gcc $(CFLAGS) -c copy2.c

count-c: count-c.o
	gcc -o count-c count-c.o

count-c.o: count-c.c
	gcc $(CFLAGS) -c count-c.c

count-lines: count-lines.o
	gcc -o count-lines count-lines.o

count-lines.o: count-lines.c
	gcc $(CFLAGS) -c count-lines.c

count-words: count-words.o
	gcc -o count-words count-words.o

count-words.o: count-words.c
	gcc $(CFLAGS) -c count-words.c

count-digits: count-digits.o
	gcc -o count-digits count-digits.o

count-digits.o: count-digits.c
	gcc $(CFLAGS) -c count-digits.c

## Sobre EOF
eof: eof.o
	gcc -o eof eof.o

eof.o: eof.c
	gcc $(CFLAGS) -c eof.c

clean:
	rm -f *.exe *.o *~
