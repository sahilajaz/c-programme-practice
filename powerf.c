#include <stdio.h>
#include <stdio.h>
int power(int a , int b);

int main() 
{
    int a , b , res;
    printf("enter a and b : \n");
    scanf("%d %d" , &a , &b);

    res = power(a , b);

    printf("result is %d " , res);
}

int power(int a , int b)
{
    int x;
    x = pow(a , b);
    return x;
}