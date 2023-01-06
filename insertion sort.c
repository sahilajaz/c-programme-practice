#include <stdio.h>

int main() {
    int i , j , temp;
    int a[] = {7 , 3 , 5 , 4 , 2 , 6};

    for(i=0 ; i<6 ; i++) {
        temp = a[i];
        j = i - 1;

        while(j > 0 && a[j]>temp) {
            a[j+1] = a[j];
            j = j -1;
        }
        a[j+1] = temp;
    }

    printf("##the sorted elements are##");

    for(i=0 ; i<6 ; i++) {
        printf("%d \n" , a[i]);
    }
    return 0;
    
}