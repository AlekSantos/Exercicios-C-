#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  int pfd[2]; int r;

  r = pipe(pfd); if (r < 0) { perror("pipe"); exit(1); }
  r = fork(); if (r < 0) { perror("fork"); exit(2); }

  if (r == 0) {
    close(pfd[1]);
    r = dup2(pfd[0], STDIN_FILENO); if (r < 0) { perror("filho dup2"); exit(3); }

    close(pfd[0]);
    execl("/usr/bin/less","less",NULL);
    fprintf(stderr,"%s: execl() failed - %s\n",argv[0],strerror(errno));
  }

  close(pfd[0]);
  r = dup2(pfd[1], STDOUT_FILENO); if (r < 0) { perror("pai dup2"); exit(4); }
  //close(pfd[1]);
  
  for (int c = 0; c < 100; ++c)
    printf("Eis a linha %d\n",c);
  fclose(stdout);
 
  wait(NULL);
  exit(0);
}
