#include <stdio.h>
int main()
{
    int l , b , area , perimeter;

    printf("enter length :");
    scanf("%d" , &l);

    printf("enter breadth :");
    scanf("%d" , &b);

    perimeter = 2*(l + b);
    area = l * b;

    if(area > perimeter)
    {
        printf("area is greater than perimeter");
    }

    else{
        printf("perimeter is greater than area");
    }

    return 0;
}