#include <stdio.h>

int main(void) {
  /* copy input to output */
  int c;

  c = getchar();
  while (c != EOF) { /* eof := end-of-file*/
    putchar(c);
    c = getchar();
  }
  // fim
}
