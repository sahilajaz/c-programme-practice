#include <stdio.h>
int main()
{
    int  n , i , count ;

    for(i = 1 ; i <= 300 ; i++) {
        count = 0;
        for(n=1 ; n<=i ; n++ ) {
            if(i % n == 0) {
                count++ ;
            }
        }
        if(count == 2) {
            printf("%d \n" , i);
        }
    }

    return 0;
}