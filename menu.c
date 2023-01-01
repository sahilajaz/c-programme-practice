#include <stdio.h>
int main()
{
    int choice = 0 , num , n , fact =1  , i =1 , j , count;
    printf("\n\n### MENU ###\n");
    printf("1 factorial of a number\n");
    printf("2 for prime numbers\n");
    printf("3 odd or even\n");
    printf("4 exit\n");

    printf("your choice : ");
    scanf("%d" , &choice);

    switch(choice) {
        

        //for factorial
        case 1 :

        printf("enter a integer : ");
        scanf("%d" , &num);

        n = num;

        while(i <= n) {
            fact = fact*i;
            i++;
        }
        printf("the factorial is %d " , fact);
        break;

        //prime numbers

        case 2 :

        printf("enter an integer : ");
        scanf("%d" , &num);

        n = num;

        for(j=1 ; j<=n ; j++) {
            if(n%j == 0) {
                count++;
            }
        }
        if(count == 2) {
            printf("the given number is a prime number");
        }

        else{
            printf("given number is not a prime number");
        }
    

        break;

        //odd or even
        case 3 :

        printf("enter an integer : ");
        scanf("%d", &num);

        n = num;

        if(n %2 == 0) {
            printf("number is even ");
        }
        else {
            printf("odd numberr");
        }

        break;

        //exit option
        case 4 :
        printf("you exited \n");
        return 0;
        break;
    }
    getch();
    main();
}