#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i;
  int j;
  
  i= atoi(argv[1]);
  j= 1 + i;

  printf("%d %d\n",i,j);
  return 0;
}