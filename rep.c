#include <stdio.h>
int main()
{
    int num , rev = 0 , temp ;
    printf("enter a five digit number");
    scanf("%d" , &num);
    temp = num;
    while(temp>0)
    {
        rev = rev * 10 + temp % 10 ;
        temp = temp/10;
    }
    printf("rev of a number is %d" , rev);
    return 0;
}