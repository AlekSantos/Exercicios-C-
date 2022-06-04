#include <stdio.h>
#include <inttypes.h>

int main(void) {
  /* count lines from standard input */
  int c; unsigned long nl;

  nl = 0;
  while ( (c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%ld\n", nl);
}
