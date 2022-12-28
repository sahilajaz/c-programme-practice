#include <stdio.h>
int main()
{
    int i = 1 , working_hours , over_time;
    float over_working_pay;

    while(i <= 10)
    {
        printf("enter the working hours of employee no %d :" , i );
        scanf("%d" , &working_hours);
        if(working_hours>40){
            over_time = working_hours - 40;
            over_working_pay = over_time * 12;
            printf("employee no %d overtime pay is %f \n" , i , over_working_pay);
        }
        else {
            printf("for ovver time pay work more than 40 hours\n");
            i++ ;
        }

    }

    
    return 0;
}