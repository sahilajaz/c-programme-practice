#include <stdio.h>
int main()
{
    int num , limit , positive = 0 , negative = 0 , zero = 0;

    printf("enter the limit : " );
    scanf("%d" , &limit);

    printf("enter %d number" , limit);

    while(limit) {
        scanf("%d" , &num) ;
        if(num > 0) {
            positive++ ;
        }

        else if(num<0) {
            negative++ ;
        }

        else {
            zero++;
        }

        limit--;
    }

    return 0 ;
}