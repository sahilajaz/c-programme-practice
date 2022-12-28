#include <stdio.h>
int main()
{
    char chr;

    printf("enter a character : ");
    scanf("%c" , &chr);

    chr >= 97 && chr <= 123 ? printf("lower case alphabet") : printf("not lower case alphabet");

    return 0;
}