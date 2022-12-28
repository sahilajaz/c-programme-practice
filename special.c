#include <stdio.h>
int mnain()
{
    char chr;

    printf("enter a character : ");
    scanf("%c" , &chr);

   ( chr <= 123 && chr >= 97) || (chr >= 64 && chr <= 90) ? printf("not a special symbol") : printf("special symbol") ;

    return 0;
}