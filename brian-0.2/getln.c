#include <stdio.h>
#define MAXLINE 1000

int getln(char s[], int lim);
void copy(char to[], char from[]);

int main(void) { /* print the longest input line */
  int len; /* current line length */
  int max; /* maximum length seen so far */
  char ln[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getln(ln, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, ln); // longest = line
    }
  if (max > 0) /* there was a line */
    printf("%d:%s", max, longest);
  return 0;
}

void copy(char to[], char from[])
{
  /* copy: copy 'from' into 'to'; assume /to/ is big enough */
  int i; i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

int getln(char s[], int lim) 
{
  /* getln: read a line into s, return length */
  int c, i;                  // enq n~ é EOF e enq não é newline
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c; // acumula a ``string''
  if (c == '\n') {
    s[i] = c; // coloca a quebra-de-linha em s (se não ficamos sem)
    ++i;
  }
  s[i] = '\0'; // ``fecha'' a string --- o que é uma string?
  return i;    // mostre o desenho de Brian Kernighan da página 31
}

/*
  (*) O desenho de Brian Kernighan 

  Na página 31 da versão inglês do livro ``The C Programming Language'',
  Brian Kernighan faz um desenho de como a ``string'' "hello\n" é
  amarzenada na memória (do computador).  Eis o desenho.

      [h][e][l][l][o][\n][\0]

  Cada ``[ ]'' representa um byte na memória.  Note que \0 é o sinal que
  usamos pra dizer que a string termina ali --- como ocupa um byte na
  memória, \0 também representa consumo de memória.  Então uma
  ``string'' como "hello\n" possui tamanho 6 bytes, mas ocupa 7 bytes na
  memória.  

  Dizemos ``string'' entre aspas porque C não possui strings.  As
  strings são, na verdade, ``arrays'' de caracteres.  Um array é uma
  área /contígua/ de memória.
*/
