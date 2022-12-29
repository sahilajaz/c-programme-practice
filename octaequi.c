#include <stdio.h>
#include <math.h>
int main()
{
    int number , oct = 0 , temp ,  i = 0 , rem = 0;

    printf("enter an integer : ");
    scanf("%d" , &number);
     
     temp = number ;

    while(temp!=0) {
        rem = temp % 8;
        temp = temp / 8 ;
        oct = oct + rem * pow(10 , i);
        i++ ;
    }
    
    printf("the octa equivalent is %d : " , oct);
    return 0 ;

}