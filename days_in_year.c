#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    //int day = ((abs(year - 2001)*365 ) - 1)  % 7;
    int diff = abs(year - 2001) - 1;
    int leap_year = diff % 4;
    diff -= leap_year;
    int day = (diff * 365 + leap_year*366) % 7;
    
    if (day == 0)
      printf("Sunday");
    else if (day == 1)
      printf("Monday");
    else if (day == 2)
      printf("Tuesday");
    else if (day == 3)
      printf("Wednesday");
    else if (day == 4)
      printf("Thrusday");
    else if (day == 5)
      printf("Friday");
    else if (day == 6)
      printf("Saturday");

      return 0;
}