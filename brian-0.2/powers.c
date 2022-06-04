#include <stdio.h>

int power(int m, int n);
int power_v2(int base, int n);

int main(void) {
  for (int i = 0; i < 10; ++i) {
    printf("%8d %8d %8d\n", i, power(2, i), power(-3, i));
    //printf("%8d %8d %8d\n", i, power_v2(2, i), power_v2(-3, i));
  }
  return 0;
}

int power(int base, int n) {
  /* power: raise base to the n-th power, with n >= 0 */
  /* in other words, compute base^n */
  int p; p = 1;
  for (int i = 1; i <= n; ++i)
    p = p * base;
  return p;
}

int power_v2(int base, int n) { /* call-by-value: reusing n */
  int p;
  for (p = 1; n > 0; --n)
    p = p * base;
  return p;
}
