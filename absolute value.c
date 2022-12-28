#include <stdio.h>
int main()
{
    int n , num ;

    printf("enter  a number");
    scanf("%d" , &n);

    num = n;
    
    if(num<0)
    {
        num = (-1)*num;
    }

    printf("the absolute value of %d is %d" , n , num );
    return 0;
}