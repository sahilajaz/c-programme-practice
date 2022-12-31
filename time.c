#include <stdio.h>
int main()
{
    int h;

    for(h=0 ; h<=23 ; h++) {
        if(h==0) {
            printf("12 midnight\n" , h);
            continue ;
        }
        if(h<12){
            printf("%d AM\n" , h);
        }

        if(h==12){
            printf("%d noon\n" , h);
        }

        if(h>12) {
            printf("%d PM\n" ,h);
        }
    }
    return 0;
}