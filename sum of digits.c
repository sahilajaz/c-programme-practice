#include <stdio.h>
int main()
{
    int num, sumOfDigits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0) {
        sumOfDigits += (temp % 10);
        temp = temp / 10;
    }

    printf("The sum of digits of %d is %d\n", num, sumOfDigits);

    return 0;
}