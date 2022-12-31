#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    int a , b , result;

    printf("enter a character (+ , - , * , /) : ");
    scanf("%c" , &ch);

    printf("enter a : ");
    scanf("%d" , &a);

    printf("enter b : ");
    scanf("%d" , &b);

    switch(ch) {
        case '+' : result = a + b;
        break;

        case '-' : result = a - b ;
        break;

        case'*' : result = a*b;
        break;

        case'/' : result = a/b;
        break; 
    }

    printf("result = %d" , result);
    return 0;
}