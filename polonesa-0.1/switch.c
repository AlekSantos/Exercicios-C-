#include <stdio.h>

int main(void) {
  int c;

  while ( (c = getchar()) != EOF ) {
    switch (c) {
      case '0':
        printf("zero\n");
        break;
      case '1':
        printf("um\n");
        break;
      case '2': case '3': case '4':
        printf("dois ou... ");
        printf("tres ou... ");
        printf("quatro\n");
        break;
      case '\n':
        printf("quebra de linha\n");
        break;
      default:
        printf("outro caractere (%c)\n", c);
        break;
    }
  }

  return 0;
}
