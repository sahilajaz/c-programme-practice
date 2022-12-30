#include <stdio.h>
int main()
{
    int limit , small , big , num , range ;

    printf("enter the limit : ");
    scanf("%d" , &limit) ;

    printf("enter %d number" , limit);
    scanf("%d" , &num);
     small = big = num;

     limit = limit - 1 ;

    while(limit) {
        scanf("%d" , &num);

        if(num > big) {
            big = num ;
        }

        if(num < small) {
            small = num;
        }

        limit--;

    }

    range = big - small ;
    printf("small number = %d\n big number = %d\n" , small , big);
    printf("range is %d" , abs(range)) ;
    return 0;
}