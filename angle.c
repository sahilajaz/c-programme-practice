#include <stdio.h>
int main()
{
    int angle1 , angle2 , angle3;

    printf("enter angle1 :");
    scanf("%d" , &angle1 );

    printf("enter second angle");
    scanf("%d" , &angle2);
    
    printf("enter third angle");
    scanf("%d" , &angle3);
    
    angle1 + angle2 + angle3 == 180 ;

    if(angle1 + angle2 + angle3 == 180)
    {
        printf("this is a triangle ");
    }

    else{
        printf("this is not a triangle");
    }

    return 0;
}