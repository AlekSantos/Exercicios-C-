#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

int main(void) { /* a reverse-polish calculator */
  int type; int op2; char s[MAXOP];

  while ( (type = getop(s)) != EOF ) {
    if (type == NUMBER) {
      push(atoi(s));
    } else if (type == '+') {
      push(pop() + pop());
    } else if (type == '*') {
      push(pop() * pop());
    } else if (type == '-') {
      op2 = pop();
      push(pop() - op2); /* push(pop() - pop()) is not what we want; why? */
    } else if (type == '/') {
      op2 = pop();
      if (op2 != 0) {
        push(pop() / op2);
      } else {
        printf("error: division by zero is *undefined* by mathematics\n");
      }
    } else if (type == '\n') {
      printf("\t%d\n", pop());
    } else {
      printf("error: unknown operator ``%s''\n", s);
    }
  }

  return 0;
}
