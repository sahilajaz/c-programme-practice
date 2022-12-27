#include <stdio.h>
#include <math.h>
int main()
{
    float x , y ;
    float r , phi;
    printf("enter the value of x :");
    scanf("%d" , &x);
    printf("enter the value of y");
    scanf("%d" , &y);
    r = sqrt(x * x + y * y);
    phi = atan(y/x);
    printf("the polar coordinates is %f  %f \n" , r , phi);
    return 0;
}