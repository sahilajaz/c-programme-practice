#include <stdio.h>
int main()
{
    int div , sub;

    printf("enter the class obtained by the students \n");
    scanf("%d" , &div);

    printf("enter the numbe of subjects in which the student has failed : \n");
    scanf("%d" , &sub);

    switch(div) {

        case 1 :
        if(sub<=3) {
            printf("students gets the grace marks of %d \n" , 5*sub);
        }

        else{
            printf("sorry no grace marks");
        }
        break;

        case 2 :

        if(sub<=2){
            printf("students gets grace mearks %d" , 4*sub);
        }
        else {
            printf("sorry no grace marks");
        }        
        break;

        case 3:

        if(sub<=1) {
            printf("the students gets %d grace marks" , 5*sub);
        }

        else {
            printf("sorry no grace marks");
        }
        break;

    }

    return 0;
}