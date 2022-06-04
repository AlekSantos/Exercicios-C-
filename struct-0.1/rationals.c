#include <stdio.h>

struct rational {
  int num;
  int den; /* Notice den should never be zero because there's no such
              rational number with [den]ominator zero. */
};

struct rational mul(struct rational r1, struct rational r2) {
  struct rational ret;
  ret.num = r1.num * r2.num;
  ret.den = r1.den * r2.den;
  return ret;
}

int main(void) {
  struct rational a;
  struct rational b;
  a.num = 4; a.den = 3; /* 4/3 */
  b.num = 3; b.den = 4; /* 3/4 */

  struct rational c; c = mul(a, b);

  printf("%d/%d * %d/%d = %d/%d\n", a.num, a.den, b.num, b.den, c.num, c.den);
  return 0;
}
