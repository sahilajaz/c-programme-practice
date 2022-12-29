#include <stdio.h>
int main()
{
    int limit , num , positive = 0 , negative = 0 , zero = 0 ;

    printf("enter the limit : ");
    scanf("%d" , &limit);

     printf("enter %d number " , limit ) ;
        
    while(limit) {
          scanf("%d" , &num);
      

       if(num > 0) {
         positive++ ;
       }

       else if(num<0) {
        negative++ ;
       }

       else {
        zero++ ;
       }
       limit-- ;
    }
     
     printf("number of positive numbers = %d : " , positive);
     printf("number of negative numbers = %d " , negative);
     printf("number of zeros = %d " , zero);
     return 0;

}