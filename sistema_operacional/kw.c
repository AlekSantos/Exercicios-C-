#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <math.h>
#include <time.h>


int main(int argc, char *argv[]) {
  unsigned long N = 1763; // o composto que queremos fatorar
  int  status; 
  pid_t r = fork();
  if (r < 0) { perror("fork"); exit(1); }

  if (r == 0) {
   printf("processo-filho: rodando...\n");
   time_t t = time(NULL);
   if (0 == t % 2) {
      for (int i = 2; i < sqrt(N); ++i) {
         if (0 == N % i) {
         printf("processo-filho: fator encontrado\n");
         exit(i);
         }
      }
   }
   else {
      for (int i = N - 1; i >= 2; --i) {
         if (0 == N % i) {
         printf("processo-filho: fator encontrado\n");
         exit(i);
         }
      }
   }
   printf("processo-filho: fator não encontrado\n");
   exit(1); // processo-filho morre aqui de qualquer forma
   } 
   
  if(wait(&status) != r){
   exit(1);}
  printf("processo-pai: fim\n");
  return 0;
}
