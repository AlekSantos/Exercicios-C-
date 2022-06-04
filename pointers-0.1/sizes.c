#include <stdio.h>
#include <stdint.h>

int main() {
  printf("%3ld is the size of char\n", sizeof (char));
  printf("%3ld is the size of unsigned char\n", sizeof (unsigned char));

  printf("%3ld is the size of int\n", sizeof (int));
  printf("%3ld is the size of unsigned int\n", sizeof (unsigned int));

  printf("%3ld is the size of short int\n", sizeof (short int));
  printf("%3ld is the size of unsigned short int\n", sizeof (unsigned short int));

  printf("%3ld is the size of short\n", sizeof (short));
  printf("%3ld is the size of unsigned short\n", sizeof (unsigned short));

  printf("%3ld is the size of long int\n", sizeof (long int));
  printf("%3ld is the size of unsigned long int\n", sizeof (unsigned long int));

  printf("%3ld is the size of long\n", sizeof (long));
  printf("%3ld is the size of unsigned long\n", sizeof (unsigned long));

  printf("%3ld is the size of long long\n", sizeof (long long));
  printf("%3ld is the size of unsigned long long\n", sizeof (unsigned long long));

  printf("\n");

  printf("%3ld is the size of char*\n", sizeof (char*));
  printf("%3ld is the size of unsigned char*\n", sizeof (unsigned char*));

  printf("%3ld is the size of int*\n", sizeof (int*));
  printf("%3ld is the size of unsigned int*\n", sizeof (unsigned int*));

  printf("%3ld is the size of void*\n", sizeof (void*));

  printf("\n");

  char cs[100];
  printf("%3ld is the size of array cs\n", sizeof cs);

  int is[100];
  printf("%3ld is the size of array is\n", sizeof is);

  printf("\n");
  /* printf("C99 inttypes.h, stdint.h integer types:\n"); */

  int8_t   i8;  uint8_t  ui8;
  printf("%3ld is the size of int8_t\n", sizeof i8);
  printf("%3ld is the size of uint8_t\n", sizeof ui8);

  int16_t i16; uint16_t ui16;
  printf("%3ld is the size of int16_t\n", sizeof i16);
  printf("%3ld is the size of uint16_t\n", sizeof ui16);

  int32_t i32; uint32_t ui32;
  printf("%3ld is the size of int32_t\n", sizeof i32);
  printf("%3ld is the size of uint32_t\n", sizeof ui32);

  int64_t i64; uint64_t ui64; uintmax_t umax;
  printf("%3ld is the size of int64_t\n", sizeof i64);
  printf("%3ld is the size of uint64_t\n", sizeof ui64);
  printf("%3ld is the size of uintmax_t\n", sizeof umax);


}
