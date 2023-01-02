#include <stdio.h>
int sum(int x , int y , int z);

int main()
{
    int a , b , c;
    printf("enter a and b and c \n");
    scanf("%d %d %d" , &a , &b , &c);

    int result = sum(a , b , c);
    printf("the result is %d" , result);
    return 0;
}

int sum(int x , int y , int z ) 
{
    int d;
    d = x + y + z;
    return d;
}