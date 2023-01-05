#include <stdio.h>

int main() {
    int i , j , temp , a[100] , n;

    printf("enter number of elements : ");
    scanf("%d" , &n);

    printf("enter %d elements " , n);
    for(i=0 ; i<n ; i++) {
       scanf("%d" , &a[i]);
    }

    for(i=0 ; i<n ; i++) {

        for(j=0 ; j<n ; j++) {

         if(a[j]  > a[j+1]) {
            temp   = a[j];
            a[j]   = a[j+1];
            a[j+1] = temp;
         }
        }

        printf("sorted array : \n");

        for(i=0 ; i<n ; i++) {
          printf("%d \n" , a[i]);
        }
    }
}