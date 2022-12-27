#include <stdio.h>
#include <stdio.h>
int main()
{
   int arr[] = {100, 50, 10, 5, 2, 1};
   int array_size = 6;
   int number, noOfNotes = 0, i = 0;
   printf("Enter a number: ");
   scanf("%d", &number);

   while(number > 0) {
        noOfNotes += number / arr[i];
        number = number % arr[i];
        i++;
   }

   printf("Notes req: %d", noOfNotes);
   return 0;
}