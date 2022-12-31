#include <stdio.h>
int main()
{
    int y;
    float i , x;

    printf("i\t \t\t\ty \tx\n");

    for(y=1 ; y<=6 ; y++){

        for(x=5.5 ; x<=12.5 ; x = x + 0.5) {
            i = 2 + (y + 0.5*x) ;
            printf("%f\t\t%d\t%f\n" , i , x , y);
        }
    }
    return 0;
}