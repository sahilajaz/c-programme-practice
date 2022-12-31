#include <stdio.h>
int main() 
{
  int i ; 
  float fac =  1.0 , res  , total = 0.0;

  for(i = 0 ; i < 8 ; i++) {
       fac = fac * i ;

       res = i/fac ;

       total = total + res ;
  }
   printf("%f" , total) ;
   return 0 ;
}
