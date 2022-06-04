#include <ctype.h>
#include <string.h>
#include <stdio.h>

#define NKEYS ((sizeof table) / (sizeof table[0]))
#define MAXWORD 100

struct kw {
  char *word; 
  int count;
};

struct kw table[] = {
  {"break", 0},
  {"case", 0},
  {"char", 0},
  {"const", 0},
  {"int", 0},
  {"continue", 0},
  {"default", 0},
  {"unsigned", 0},
  {"void", 0},
  {"volatile", 0},
  {"while", 0}
};

int main() {
  printf("sizeof table[0] = %ld\n", sizeof table[0]);
  printf("sizeof (struct kw) = %ld\n", sizeof (struct kw));
  return 0;
}






#include <ctype.h>
#include <string.h>
#include <stdio.h>

struct key {
  char *word; 
  int count;
};

struct key table[] = {
  {"break", 0},
  {"case", 0},
  {"char", 0},
  {"const", 0},
  {"int", 0},
  {"continue", 0},
  {"default", 0},
  {"unsigned", 0},
  {"void", 0},
  {"volatile", 0},
  {"while", 0},
  {"for",0},
  {"else",0}
};

#define NKEYS ((sizeof table) / (sizeof table[0]) )

int getword(char *, int);
int lookup(char *, struct key *);

#define MAXWORD 100


int main() {
  int n; char word[MAXWORD];
  if

  while (getword(word, MAXWORD) != EOF)
    if (isalpha(word[0]))
      if ((n = lookup(word, table)) >= 0)
        table[n].count++;

  for (n = 0; n < NKEYS; n++)
    
    printf("%4d %s\n",table[n].count, table[n].word);
  return 0;
}
int lookup(char *word, struct key tab[]) {
  for (int i = 0; i < NKEYS; ++i)  {
    if (!strcmp(word, table[i].word))
      return i;
  }
  return -1; /* not found */
}

int getword(char *word, int lim) {
  int getch(void);
  void ungetch(int);

  int c; 
  char *w = word;

  while (isspace(c = getch()))
    ;

  if (c != EOF)
    *w++ = c;

  if (!isalpha(c)) {
    *w = '\0';
    return c;
  }

  for ( ; --lim > 0; w++)
    if (!isalnum(*w = getch())) {
      ungetch(*w);
      break;
    }

  *w = '\0';
  return word[0];
}



-------------------
#include <ctype.h>
#include <string.h>
#include <stdio.h>

struct key {
  char *word; 
  int count;
};

struct key table[] = {
  {"break", 0},
  {"case", 0},
  {"char", 0},
  {"const", 0},
  {"int", 0},
  {"continue", 0},
  {"default", 0},
  {"unsigned", 0},
  {"void", 0},
  {"volatile", 0},
  {"while", 0},
  {"for",0},
  {"else",0}
};

#define NKEYS ((sizeof table) / (sizeof table[0]) )

int getword(char *, int);
int lookup(char *, struct key *);

#define MAXWORD 100


int main(int argc,char *argv[]) {
  int n; char word[MAXWORD];
  if (argc < 2)
    while (getword(word, MAXWORD) != EOF)
      if (isalpha(word[0]))
        if ((n = lookup(word, table)) >= 0)
          table[n].count++;
        for (n = 0; n < NKEYS; n++)
          printf("%4d %s\n",table[n].count, table[n].word);
        

        return 0;
  else
    
        
}
int lookup(char *word, struct key tab[]) {
  for (int i = 0; i < NKEYS; ++i)  {
    if (!strcmp(word, table[i].word))
      return i;
  }
  return -1; /* not found */
}

int getword(char *word, int lim) {
  int getch(void);
  void ungetch(int);

  int c; 
  char *w = word;

  while (isspace(c = getch()))
    ;

  if (c != EOF)
    *w++ = c;

  if (!isalpha(c)) {
    *w = '\0';
    return c;
  }

  for ( ; --lim > 0; w++)
    if (!isalnum(*w = getch())) {
      ungetch(*w);
      break;
    }

  *w = '\0';
  return word[0];
}
============
if (argc >1)
      for (n=0; n < NKEYS -1  ; n++)
        if (table[n ].word == (p=argv[1]) )

          printf("%4d %s \n ",table[n].count, table[n].word);

        ----------------------
        #include <ctype.h>
#include <string.h>
#include <stdio.h>

struct key {
  char *word; 
  int count;
};

struct key table[] = {
  {"break", 0},
  {"case", 0},
  {"char", 0},
  {"const", 0},
  {"int", 0},
  {"continue", 0},
  {"default", 0},
  {"unsigned", 0},
  {"void", 0},
  {"volatile", 0},
  {"while", 0},
  {"for",0},
  {"else",0}
};

#define NKEYS ((sizeof table) / (sizeof table[0]) )

int getword(char *, int);
int lookup(char *, struct key *);

#define MAXWORD 100


int main(int argc,char *argv[]) {
  int n; char word[MAXWORD]; char *p;
  

    while (getword(word, MAXWORD) != EOF)
      if (isalpha(word[0]))
        if ((n = lookup(word, table)) >= 0)
        table[n].count++;


    if (argc == 1)
      for (n=0; n < NKEYS; n++)
        printf("%4d %s\n",table[n].count, table[n].word);

  
    if (argc >1)
      if ((n = lookup(argv[1], table)) >= 0)
        printf("%d %s \n" ,table[n].count,table[n].word);

  return 0;      
}
int lookup(char *word, struct key tab[]) {
  for (int i = 0; i < NKEYS; ++i)  {
    if (!strcmp(word, table[i].word))
      return i;
  }
  return -1; /* not found */
}

int getword(char *word, int lim) {
  int getch(void);
  void ungetch(int);

  int c; 
  char *w = word;

  while (isspace(c = getch()))
    ;

  if (c != EOF)
    *w++ = c;

  if (!isalpha(c)) {
    *w = '\0';
    return c;
  }

  for ( ; --lim > 0; w++)
    if (!isalnum(*w = getch())) {
      ungetch(*w);
      break;
    }

  *w = '\0';
  return word[0];
}