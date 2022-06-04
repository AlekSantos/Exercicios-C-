#include <stdio.h>
#include <inttypes.h> /* for PRIu64 and uint64_t */
#include <limits.h> /* for UINT64_MAX */
#include <stdlib.h> /* for exit() */

#define SUPPORTED "+ - %%"

void usage(int e) {
  printf("Usage: expr operand-1 operator operand-2\n");
  printf(" where operator must be exactly one of " SUPPORTED ".\n\n");

  printf("We do not support negative or rational numbers.\n\n");
  printf("But we do not suffer from integer overflow and\n");
  printf(" our numbers can go up to %" PRIuMAX ".\n\n", UINT64_MAX);

  printf("In other words, this program may have some limitations,\n"
         "like any other program, but it has no programming flaws.\n\n");

  printf("(*) C99, section 6.2.5.9\n\n"
      "``A computation involving unsigned operands can never overflow,\n"
      "because a result that cannot be represented by the resulting\n"
      "unsigned integer type is reduced modulo the number that is one\n"
      "greater than the largest value that can be represented by the\n"
      "resulting type.''\n\n");

  exit(e);
}

uint64_t array_to_uint64(char *s, uint64_t *u) 
{
  uint64_t pos;
  uint64_t r;
  uint64_t c;

  pos = 0; r = 0;

  for ( ;; ) {
    c = (uint64_t) (unsigned char) (s[pos] - '0');
    if (c < 10) {
      if( ((UINT64_MAX - c) / 10) >= r) 
        r = r * 10 + c;
      else return -1; /* doesn't fit */
      ++pos; continue;
    }
    break;
  }

  *u = r;
  return pos;
}

uint64_t power(uint64_t base, uint64_t n) {
  uint64_t p; p = 1;
  for (uint64_t i = 1; i <= n; ++i)
    p = p * base;
  return p;
}

int main(int argc, char *argv[]) { /* a prototype of expr(1) */
  /* 
     We only support binary operands, that is, every command-line must
     be composed of 4 arguments as in

         expr op1 operator op2
         
    where operator must be exactly one of SUPPORTED operators.
  */
  if (argc <= 1) usage(0);
  if (argc <  4) usage(1);
  if (argc >  4) usage(2);

  uint64_t op1;
  uint64_t op2;
  uint64_t r; 
  int okay;

  okay = array_to_uint64(argv[1], &op1);
  if (okay == -1) {
    printf("expr: %s is too large\n", argv[1]);
    exit(1);
  }
  if (okay == 0) {
    printf("expr: %s is an invalid natural number\n", argv[1]);
    exit(1);
  }

  okay = array_to_uint64(argv[3], &op2);
  if (okay < 0) {
    printf("expr: %s is too large\n", argv[2]);
    exit(1);
  }
  if (okay == 0) {
    printf("expr: %s is an invalid natural number\n", argv[2]);
    exit(1);
  }

  int operator; 
  operator = argv[2][0];

  /* printf("op1 = %lu\n", op1); */
  /* printf("op2 = %lu\n", op2); */

  switch(operator) {

  case '-':
    if (op1 < op2) {
      printf("expr: illegal subtraction\n");
      exit(101);
    }
    r = op1 - op2;
    printf("%" PRIu64 "\n", r);
    break;

  case '+':
    r = op1 + op2;
    printf("%" PRIu64 "\n", r);
    break;

  case '%':
    r = op1 % op2;
    printf("%" PRIu64 "\n", r);
    break;

  default:
    printf("expr: unknown operator ``%c''\n", operator);
    exit(101);
    break;
  }

  return 0;
}

uint64_t array_to_uint64_unchecked(char *s, uint64_t *u) 
{
  uint64_t pos;
  uint64_t r;
  uint64_t c;

  pos = 0; r = 0;

  for ( ;; ) {
    c = (uint64_t) (s[pos] - '0');
    if (c < 10) {
      r = r * 10 + c; ++pos; continue;
    }

    break;
  }

  *u = r;
  return pos;
}
