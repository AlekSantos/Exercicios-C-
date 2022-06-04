#include <stdio.h>

int main(void) {
  printf("EOF = %d\n", EOF);

  /* a questão da precedência */
  printf("c = %d\n", 'x' == EOF);
  printf("c = %d\n", 'x' != EOF);
}
