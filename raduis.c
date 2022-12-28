#include <stdio.h>
#include <math.h>
int main()
{
    int x1 , y1 , x2 , y2 , radius;
    float pc;

    printf("enter the coordinates (x1 , y1) :");
    scanf("%d %d" , &x1 , &y1);

    printf("enter the radius");
    scanf("%d" , &radius);

    printf("enter the coordinates (x2 , y2) :");
    scanf("%d %d" , &x2 , &y2);

    pc = sqrt(pow(x2-x1 , 2) + pow(y2-y1 , 2));

    if(pc>radius)
    {
        printf("point lies outside the circle");
    }

    else if(pc<radius)
    {
        printf("point lies inside the circle");
    }

    else if(pc == radius)
    {
        printf("point is on the boundary");
    }

    else {
        printf("wrong entry");
    }

    return 0;
}