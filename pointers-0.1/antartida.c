#include <stdio.h>

int main() {
  unsigned char bs[] = {0, 0, 0, 0}; /* little-endian */
  unsigned int *p; p = (unsigned int *) bs;
  printf("antartida.xyz has address http://%u\n", *p);
}
