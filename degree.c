#include <stdio.h>
#include <math.h>
int main()
{
    int degree , result;

    printf("enter the angles in degrees :");
    scanf("%d" , &degree);

    result = (sin(degree)*sin(degree) + cos(degree)*cos(degree));

    printf("the result is : %d" , &result );
    return 0;
}