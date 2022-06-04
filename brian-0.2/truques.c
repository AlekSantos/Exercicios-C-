#include <stdio.h>

/* 
   Avisa o compilador que tipo de dados esse procedimento retorna. Ele
   precisa ser avisado porque ele precisa alocar memória para o
   retorno de quantos() --- usado logo abaixo.
*/
int quantos(void);

int main(void) {
  printf("Tenho %d truques na manga.\n", quantos());
}
