#include <stdio.h>
int main()
{
    int num , sum =0 , temp;
    printf("enter a five digit number ");
    scanf("%d" , &num);
    temp = num ;
    while(temp>0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    printf("the sum of five digit number is %d" , sum);
    return 0;
}