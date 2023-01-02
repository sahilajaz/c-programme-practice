#include <stdio.h>
int factorial(int n);

int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d" , &num);
    printf("factorial is %d" , factorial(num));
    return 0;
}

int factorial(n) {
    if(n == 0) {
        return 1;
    }
    int factNm1 = factorial(n-1);
    int factN = factNm1 * n;
    return factN;
}