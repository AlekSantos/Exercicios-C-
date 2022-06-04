#include <stdio.h>

int main() {
  int x; x = 16909060; printf("x = %d\n", x);
  /* 
     Caro compilador, veja esses bytes como caracteres.  Interprete
     esses bytes como caracteres.  Em outras palavras, me dê um
     ponteiro que aponte para um caractere no endereço de x.  (Mas x é
     um inteiro, então o que vamos obter é o primeiro caractere que
     compõe x, que é o mesmo que dizer o primeiro byte que compõe x.)
  */
  char *p; p = (char *) &x; 

  /* Obrigado.  Agora imprima os bytes pra que eu possa vê-los. */
  printf("x[0] = %02x\n", p[0]);
  printf("x[1] = %02x\n", p[1]);
  printf("x[2] = %02x\n", p[2]);
  printf("x[3] = %02x\n", p[3]);
}
