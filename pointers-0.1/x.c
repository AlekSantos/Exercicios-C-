#include <stdio.h>

int main() {
  char c; c = 'a';
  printf("c = %d = %c\n", c, c);
  printf("c is at %p\n", &c);
}
