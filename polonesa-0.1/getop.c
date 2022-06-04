#include <stdio.h>
#include <ctype.h>
#include "polonesa.h"

int getop(char s[]) {
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ; /* skip white space */

  s[1] = '\0'; 

  if (!isdigit(c)) {
    return c; /* not a digit, not an integer */
  }

  i = 0;
  if (isdigit(c)) /* read the integer into s until its end */
    while (isdigit(s[++i] = c = getch()))
      ;
  s[i] = '\0'; /* close the string */

  if (c != EOF)
    ungetch(c); 

  return NUMBER;
}

#ifdef TEST
int main(void) {
  /*
    Como usar esse programa?  Rode-o e diga ^D três vezes a seu
    terminal.  Lembre-se de que ^D significa pressionar Ctrl+D no seu
    teclado.

    %./getop.exe
    ^Di = 48, buf = 1
    ^Di = 48, buf = 2
    ^Di = 48, buf = 3
    %

    Note que ^D não é exibido; escrevo-o acima para lhe informar que
    pressionei ^D naquele momento.

    Exercício.  Compare o experimento acima com...

    %printf 234 | ./getop.exe
    i = 48, buf = 1234
    i = 48, buf = 2
    i = 48, buf = 3
    %

    Consegue explicar essa saída?
   */

  char buf[100]; int i;
  ungetch('1');
  i = getop(buf); printf("i = %d, buf = %s\n", i, buf);

  ungetch('2');
  i = getop(buf); printf("i = %d, buf = %s\n", i, buf);
  
  ungetch('3');
  i = getop(buf); printf("i = %d, buf = %s\n", i, buf);
  return 0;
}
#endif
