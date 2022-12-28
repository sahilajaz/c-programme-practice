#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the number of days since 1/1/0001
    int numDays = (year - 1) * 365;
    numDays += (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // Calculate the day of the week for 1/1/year
    int dayOfWeek = numDays % 7;

    // Print the result
    printf("January 1 of %d is a ", year);
    switch (dayOfWeek) {
        case 0:
            printf("Sunday.\n");
            break;
        case 1:
            printf("Monday.\n");
            break;
        case 2:
            printf("Tuesday.\n");
            break;
        case 3:
            printf("Wednesday.\n");
            break;
        case 4:
            printf("Thursday.\n");
            break;
        case 5:
            printf("Friday.\n");
            break;
        case 6:
            printf("Saturday.\n");
            break;
    }

    return 0;
}
