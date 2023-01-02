#include <stdio.h>
int rec_function(int num);
int non_rec_function(int num);

int main() {
    int n;
    printf("enter a five digit number : ");
    scanf("%d" , &n);

    int rec_function(n);
    int non_rec_function(n);

    printf("sum using recursive function is %d \n " , rec_function(n));
    printf("sum using non recursive function is %d \n" , non_rec_function(n));
}

int rec_function(int num) 
{
    if(num == 0) {
        return 0;
    }

    return (num%10 + rec_function(num/10));
}

int non_rec_function(int num)
{
    int res , sum =0;

    while(num != 0) {
        res = num % 10;
        sum = sum + res;
        num = num/10;
    }

    return sum;
}