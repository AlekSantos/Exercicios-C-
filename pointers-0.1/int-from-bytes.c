#include <stdio.h>

int main() {
  /*
    Declare um array chamado bs (de ``[b]yte[s]'') e coloque nele os
    inteiros 4, 3, 2, 1.
   */
  char bs[] = {4, 3, 2, 1};

  /*
    Declare um ponteiro p que aponte para uma região de memória que
    queremos enxergar como int.  A região em si é são os bytes de bs.
    Para o compilador não ficar preocupado, digamos expressamente a
    ele que de fato queremos olhar pra essa região como se um inteiro
    fosse --- fazemos o ``cast'' (int *).
  */
  int *p; p = (int*) bs;

  /*
    Nesse momento, p aponta pra bs.  Pra obter o valor que está
    escrito em p, pedimos ao compilador pra fazer a dereferência ---
    caro compilador, deref(p), por favor.
   */
  printf("%d\n", *p);
}
