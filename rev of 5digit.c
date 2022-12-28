#include <stdio.h>
int main()
{
    int num , rev = 0 , temp;

    printf("enter a five digit number :");
    scanf("%d" , &num);

    temp = num;

    if(temp>0)
    {
        rev += (rev * 10) + (temp % 10);
        temp = temp/10;
    }

    printf("reverse of number is %d\n" , rev);

    if(num == rev)
    {
        printf("given number %d and reverse number %d are equal\n" , num , rev);
    }

    else {
        printf("given number %d and reverse number %d are not equal \n" , num , rev);
    }

    return 0;
}