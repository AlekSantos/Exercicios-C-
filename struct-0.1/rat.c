#include <stdio.h>
#include <stdlib.h>

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
struct rational divi(struct rational r1, struct rational r2) {
  struct rational ret;
  ret.num = r1.num * r2.den;
  ret.den = r1.den * r2.num;
  return ret;
}
struct rational inv(struct rational r){
  struct rational ret;
  ret.num= r.den;
  ret.den=r.num;
  return ret;
}  

int mmc(struct rational r1,struct rational  r2){

  int den1; den1=r1.den;
  int den2; den2=r2.den;
  int cden1; cden1=r1.den;
  int cden2; cden2=r2.den;

  while (den1 !=den2){

    if (den1 > den2){
      den2=den2 + cden2;
    }
    if (den2 > den1){
      den1=den1 + cden1;
    }
    
  }
  return den1;
}
struct rational soma(struct rational r1,struct rational r2,int m){
  struct rational ret;
  ret.num= (r1.num *(m/r1.den)) + (r2.num *(m/r2.den)); 
  ret.den=m;
  
  return ret;
}  
struct rational sub(struct rational r1,struct rational r2,int m){
  struct rational ret;
  ret.num= (r1.num *(m/r1.den)) - (r2.num *(m/r2.den)); 
  ret.den=m;
  
  return ret;
}  


int main(int argc, char *argv[]) {


  struct rational a;
  struct rational b;
  int operator;
  operator = argv[3][0];

    switch(operator) {

      case 'x':
        
        a.num = atoi(argv[1]); a.den =atoi(argv[2]) ; /* 4/3 */
        b.num = atoi(argv[4]); b.den = atoi(argv[5]); /* 3/4 */

        struct rational c; c = mul(a, b);

        printf("%d/%d * %d/%d = %d/%d\n  \n", a.num, a.den, b.num, b.den, c.num, c.den);

        break;

      case '/':

        a.num = atoi(argv[1]); a.den =atoi(argv[2]) ; 
        b.num = atoi(argv[4]); b.den = atoi(argv[5]);
        struct rational d; 
        d = divi(a, b);

        printf("%d/%d / %d/%d = %d/%d\n  \n", a.num, a.den, b.num, b.den, d.num, d.den);

        break;
      case '.':

      a.num = atoi(argv[1]); a.den =atoi(argv[2]) ; 
      b.num = 0; b.den= 0;
      struct rational e;
      e = inv(a);

      printf("%d/%d * %d/%d = 1\n",a.num,a.den,e.num,e.den);

      case '+':
        a.num = atoi(argv[1]); a.den=atoi(argv[2]) ; 
        b.num = atoi(argv[4]); b.den = atoi(argv[5]);
        struct rational h;
        
        int mc;
        mc = mmc(a,b);
        h = soma(a, b,mc);
        

        printf("%d/%d + %d/%d = %d/%d \n",a.num,a.den,b.num,b.den,h.num,h.den);
        break;

      case '-':
        a.num = atoi(argv[1]); a.den=atoi(argv[2]) ; 
        b.num = atoi(argv[4]); b.den = atoi(argv[5]);
        struct rational p;
        
        int mcc;
        mcc = mmc(a,b);
        p = sub(a, b,mcc);
        

        printf("%d/%d - %d/%d = %d/%d \n",a.num,a.den,b.num,b.den,p.num,p.den);
        break;  
      }
  
  return 0;
}