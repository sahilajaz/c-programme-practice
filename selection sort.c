#include <stdio.h>

int main() {
    int a[100] , n , min , swap;


    printf("enter number of elemennts : ");
    scanf("%d" , &n);
    
   // printf("enter %d numbers " , n);

    for(int i = 0 ; i < n ; i++) {
        printf("Numbers %d:\t" , i);
        scanf("%d" , &a[i]);
    }

    for(int i=0 ; i<n-1 ; i++) {
        min = i;

        for(int j = i +1 ; j < n ; j++) {
            if(a[min]> a[j]) {
                min = j;
            }
        }

        if(min != i) {
            swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
    }

    printf("sorted elements ");

    for(int i=0 ; i<n ; i++) {
        printf("%d\t" , a[i]);
    } 

    return 0;

}