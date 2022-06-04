#include <stdio.h>
#include "polonesa.h"
#define MAXVAL 100

int sp = 0; 
int val[MAXVAL];

void push(int n) {
  if (sp < MAXVAL)
    val[sp++] = n;
  else
    printf("error: stack full: %d\n", n);
}

int pop(void) {
  if (sp > 0)
    return val[--sp];
  else {
    printf("error: tried to pop an empty stack\n");
    return 0;
  }
}

#ifdef TEST
/*
  Uma forma de escrever uma biblioteca e testá-la no próprio arquivo é
  escrever uma biblioteca como esta e compilá-la definindo uma
  constante por via da linha de comando.  O comando abaixo compila o
  arquivo stack.c como se ele contivesse ``#define TEST'' em seu
  código fonte, ou seja, o procedimento main() só é incluído se você
  quiser produzir o stack.exe --- pra testá-lo.

  %gcc -DTEST -o stack stack.c
  %./stack.exe
  popped 5
  popped 4
  popped 2
  popped 1
  error: tried to pop an empty stack
  popped 0
  %  
*/

int main(void) {
  push(1); 
  push(2); 
  push(3); pop();
  push(4); 
  push(5);
  for (int i = 0; i < 5; ++i)
    printf("popped %d\n", pop());
}
#endif
