#include <stdio.h>
int main()
{
    int num , temp , rem = 0 ,  sum = 0 , i;
    
    num = 1;
    temp = 1;

    for(i = 1; i <= 500 ; i++)
    {
        while(num!=0) {
            rem = num % 10;
            num = num / 10;
            sum = sum + rem * rem * rem;
        }

        if(sum == temp) {
            printf("%d \n" , temp);
            temp = 0;
            num = 0;
            rem = 0;
           temp = i +1;
           num = i+1;
        }  
    }

    return 0;
}