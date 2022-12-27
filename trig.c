#include <stdio.h>
#include <math.h>
int main()
{
    float degree , radians , pi;
    pi = 3.14;
    printf("enter angle in degree");
    scanf("%f" , &degree);
    radians = degree * (pi/180);
    printf("sin(%f) = %f \n" , degree , sin(radians));
    printf("cos(%f) = %f \n" , degree , cos(radians));
    return 0;
}