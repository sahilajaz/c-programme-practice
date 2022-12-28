#include <stdio.h>
int main()
{
    int i = 1 , n , num , factorial = 1;

    printf("enter a number : ");
    scanf("%d" , &n);

    num = n;

   while(i <=num)
    {
      factorial = factorial * i ;
      i++;
    }

    printf("factorail of given number is %d \n" , factorial);
    return 0;
}