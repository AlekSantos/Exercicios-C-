#include <stdio.h>

int main(void) {
  for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %5.2f\n", fahr, (5.0/9.0) * (fahr - 32));
}
