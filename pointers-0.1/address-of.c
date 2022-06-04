#include <stdio.h>

#define ADDRESS_OF *

int main() {
  char c; c = 'a';
  char ADDRESS_OF p;

  p = &c;

  printf("c = '%c'\n", c);
  printf("p = %p\n", p);
  printf("At address p, we find '%c'\n", *p);
}
