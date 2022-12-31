#include <stdio.h>
int main()
{
    int year = 0 , invest , alternate ;

    while(alternate > invest) {
        year++ ;
        alternate = year * 90;

        invest = (1000*year) - 4000;
    }
      printf("the year of machine is %d" , year);
      return 0;
}