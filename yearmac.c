#include <stdio.h>
int main()
{
    int year = 0 , invest , alternate ;

    while(alternate > invest) {
        alternate = year * 90;

        invest = (1000*year) - 4000;
        year++ ;
    }
      printf("the year of machine is %d" , year);
      return 0;
}