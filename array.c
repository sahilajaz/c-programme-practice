#include <stdio.h>

int main() {
    int   x , count = 0;
      int arr[25] = { 1 , 2 ,  3 , 4 , 5 , 6 ,  7 , 8 ,  9 , 10 , 11 , 12, 13 , 14, 15 , 16 , 17 , 18 , 19 , 20 , 21 , 23 , 24 , 25};


    printf("enter the number you want to search : ");
    scanf("%d" , &x);

    for(int i=0 ; i<25 ; i++) {
        if(x == arr[i]){
        count++;
        }
    }
     

     if(count !=0) {
    printf("the number is present %d times in the array" , count);

     }

    else {
      printf("not present in the array");
    }

    return 0;
}