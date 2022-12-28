#include <stdio.h>
int main()
{
    int x , y ;
    printf("enter the coordinates (x , y) :");
    scanf("%d %d" , &x , &y);

    if(x!=0 && y == 0)
    {
        printf("point lies on the x axis");
    }

    else if (y!=0 && x == 0)
    {
        printf("point lies on y axis ");
    }

    else if(x == 0 && y == 0)
    {
        printf("point lie on the origin");
    }

    else {
        printf("points (%d , %d) doesnt lie on any axis" , x , y);
    }

    return 0;
}