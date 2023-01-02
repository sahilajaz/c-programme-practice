#include <stdio.h>
void leapyear(int year);

int main()
{
    int y ;
    printf("enter a year : ");
    scanf("%d" , &y);
    leapyear(y);
}

void leapyear(int year) 
{
    if(year % 4 == 0 || year % 400 == 0) {
        printf("the given year is a leap year");
    }

    else if(year%100 == 0) {
        printf("the given year is not a leap year");
    }

    else {
        printf("the given year is not a leap year");
    }
}