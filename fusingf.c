#include <stdio.h>
int factorial(int num);


int main()
{
    int n , fact ;

    printf("enter a number : ");
    scanf("%d" , &n);

    fact = factorial(n);
    printf("the factorial of %d is %d" , n , fact);
}

int factorial(int num) 
{
    int res , f = 1 , i = 1 ; 
    res = num;
    for(i=1 ; i<=res ; i++) 
    {
        f = f * i;
    }
    return f;

}
