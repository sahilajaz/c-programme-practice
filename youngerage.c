#include <stdio.h>
int main()
{
    int age1 , age2 , age3;
    
    printf("enter the first age :");
    scanf("%d" , &age1);

    printf("enter the age second :");
    scanf("%d" , &age2);

    printf("enter the third age :");
    scanf("%d" , &age3);

    if(age1 < age2 && age1 < age3)
    {
        printf("age1 is younger");
    }

    else if(age2 <age1 && age2 < age3)
    {
        printf("age2 is younger");
    }

    else {
        printf("age3 is younger");
    }

    return 0;
}