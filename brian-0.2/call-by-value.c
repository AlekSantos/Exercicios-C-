#include <stdio.h>

void byval(char s[]) 
{
  printf(" s em %p\n", s);
  s = 0;
  printf(" s em %p\n", s);
}

int main(void) {
  char ln[] = "lorem ipsum dolor sit a met";
  printf("ln em %p\n", ln);
  byval(ln);
  printf("ln em %p --> %s\n", ln, ln);
  return 0;
}

