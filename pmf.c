#include <stdio.h>
void prime(int num);

int main()
{
    int n;
    printf("enter a number : \n");
    scanf("%d" , &n);
     printf("the prime factors of %d are : " , n);
    prime(n);

}

void prime(int num)
{   

    int x;
    

    for(x=2 ; x<=num ; x++) {
        if(num%x == 0) {
            printf("%d \n" , x);
            prime(num/x);
            break;
        }
    }
}