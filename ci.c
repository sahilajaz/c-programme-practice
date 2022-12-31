#include <stdio.h>
#include <math.h>
int main()
{
   int i ;
   float q , r , n ,  p , a ;

   for(i = 1 ; i <= 10 ; i++) {
    printf("set number : %d \n" , i);

    printf("enter principle : ");
    scanf("%f" , &p);

    printf("enter rate : ");
    scanf("%f" , &r);

    printf("enter time(in years) : ");
    scanf("%d" , &n);

    printf("enter compound interest : ");
    scanf("%f" , &q);

    a =  p * (pow((1+r/q) , n * q)) ;

    printf("amount is %f\n" , a) ;

   }

   return 0;
}