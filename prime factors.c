#include <stdio.h>

int prime(int x);

int main() 
{
  int num;
  printf("enter a number : ");
  scanf("%d" , &num);

  prime(num);

}

int prime(int x)
{
  int a;
  for(a=2 ; a>1 ; a++) {
    while(x%a == 0) {
      printf("%d \n" , a);
      x = x/a;     
      a--; 
    }
  }


}