#include <stdio.h>
int main()
{
    int n , rev = 0 , temp;
    printf("enter a number :");
    scanf("%d" , &n);
    temp = n;
    while(temp>0)
    {
    rev = rev * 10 + temp%10;
    temp = temp/10;
    }
     printf("reverse of number is %d :" , rev);
    return 0;
}