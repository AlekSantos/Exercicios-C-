#include <stdio.h>

union coin {
  int x;
  int y;
};

union coin add2(union coin r){
  union coin rat;
  rat.x = r.x + 2;
  
}

struct point {
  int x;
  int y;
};

struct point add1(struct point p) {
  struct point ret;
  ret.x = p.x + 1;
  ret.y = p.y + 2;
  return ret;
}

int main(void) {
  
  struct point p;
  struct point q;
  union coin r;
  union coin s;
  r.x = 10 ; 
  p.x = 0; p.y = 0;
  q = add1(p); /* a copy of p is passed to add1() */
  /* q is totally different from p */
  s= add2(r);

  printf("p = (%d, %d)\n", p.x, p.y);
  printf("q = (%d, %d)\n", q.x, q.y);
  printf("r = (%d)\n", r.x);
  printf("s = (%d)\n", s.x);

  /*
    You can see p was not changed by the procedure add1().
  */

  return 0;
}