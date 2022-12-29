#include <stdio.h>
int main()
{
    int num , temp , sum , rem ;

    for(num = 1 ; num<=500 ; num++) {
        temp = num;
        sum = 0;
        rem = 0;

        while(temp!=0) 
        {
            rem = temp % 10;
            temp = temp / 10;
            sum = sum + rem * rem * rem ;
        }

        if(sum == num) {
            printf("%d \n" , num);
        }

    }

    return 0;
}