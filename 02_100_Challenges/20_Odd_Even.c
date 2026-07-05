#include <stdio.h>
int main()
{
  int number;
  printf("Please, enter the number: ");
  scanf(" %d", &number);

  if(number %2 == 0){
    printf("The number is even");
  }
  else{
    printf("The number is odd");
  }
  return 0;
  /*Create a program that determines if a number is odd or even.*/
}