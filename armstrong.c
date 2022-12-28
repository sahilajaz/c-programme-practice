#include <stdio.h>
int main()
{
    int i = 1 , n , num , sum = 0 , rem =0 ;

    printf("enter a number");
    scanf("%d" , &n);
     
     num = n;

    while(num != 0) {
    rem = num % 10;
    num = num / 10;
    sum = sum + rem * rem * rem;    
    }

    if(n == sum)
    {
        printf("%d given number is armstrong number" , n);
    }

    else{
        printf("%d given number is not armstrong number" , n);
    }

    return 0;
}
