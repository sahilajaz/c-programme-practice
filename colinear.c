#include <stdio.h>
#include <math.h>
int main()
{
    int x1 , y1 , x2 , y2 , x3 , y3;
    double ab , bc , ac , abc;

    printf("enter the points (x1 , y1) :");
    scanf("%d %d" , &x1 , &x2);

    printf("enter the points (x2 , y2) :");
    scanf("%d %d" , &x2 , &y2);

    printf("enter the points (x3 , y3) :");
    scanf("%d %d" , &x3 , &y3);
    
    ab = sqrt(pow(x2-x1 , 2) + pow(y2-y1 , 2));
    bc = sqrt(pow(x3-x2 , 2) + pow(y3-y2 , 2));
    ac = sqrt(pow(x3-x1 , 2) + pow(y3-y1 , 2));

    printf("%f %f %f \n" , ab , bc , ac);

    if (ab + bc == ac)
    {
        printf("ab + bc = ac \n");
        printf("points are colinear");
    }

    else {
        printf("points are non colinear");
    }

    return 0;

}