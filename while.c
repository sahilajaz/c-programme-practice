#include <stdio.h>
int main()
{
    int i = 10 ;
    while(i >= 0)
    {
        printf("2 * %d = %d \n" , i , 2*i);
        i = i - 1;
    }
    return 0;
}