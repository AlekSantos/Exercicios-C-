#include <stdio.h>
#include <stdlib.h>
#include "polonesa.h"
#define MAXOP 100

int main(void) { /* a reverse-polish calculator */
  int type; int op2; char s[MAXOP];

  /* 
     Como funciona um switch-statement?  Podemos responder usando a
     própria linguagem C.  Veja o arquivo main-without-switch.c.  A
     sequência de if-else que você encontra lá é o significado deste
     /switch/ abaixo.
  */

  while ( (type = getop(s)) != EOF ) {

    switch (type) {
    case NUMBER: 
      push(atoi(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2); /* push(pop() - pop()) is not what we want; why? */
      break;
    case '/': 
      op2 = pop();
      if (op2 != 0) {
        push(pop() / op2);
      } else {
        printf("error: division by zero is *undefined* by mathematics\n");
      }
      break;
    case '\n':
      printf("\t%d\n", pop());
      break;
    default:
      printf("error: unknown operator ``%s''\n", s);
      break;
    }
  }
  return 0;
}
