#include <stdio.h>
int main()
{
    int i , j , k , count =1 ;

    for(i=1 ; i <=4 ; i++) {
        for(j=4 ; j>=i ; j--) {
            printf(" ");
        }
        for(k=1 ; k<=i ; k++) {
            printf(" %d " , count);
            count++;
        }
        printf("\n");
    }
    return 0;
}