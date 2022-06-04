#include <stdio.h>

int main(void) {
  /* copy input to output, second version */
  int c;
  while ((c = getchar()) != EOF)
    putchar(c);
}

/*
  Exercício.  Escreva um programa que mostra que 

    getchar() != EOF

  é sempre 0 ou 1, que é o que acontece se você não usar os parênteses
  acima.

  Exercício.  Escreva um programa que imprime o valor de EOF.
*/
