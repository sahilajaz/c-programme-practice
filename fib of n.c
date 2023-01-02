#include <stdio.h>
int fib(int num);

void main() {
    int n , c = 0 , i;
    printf("enter a n");
    scanf("%d" , &n);
    
    printf("fibonacci series is : \n");

    for(i=1 ; i<= n ; i++) {
        printf("%d \n" , fib(c)); 
        c++ ;
    }
}
    int fib(int num) {
        if(num == 0) {
            return 1;
        }

        else if(num == 1) {
            return 1;
        }

        else {
            return (fib(num-1) + fib(num-2));
        }
    }
