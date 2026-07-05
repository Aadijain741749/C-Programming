#include <stdio.h>
int main()
{
  int number;
  printf("Please, enter the number: ");
  scanf(" %d", &number);

  printf("%d is the absolute value.\n", (number>0 ? number : -number));
  return 0;

  /*Create a program to calculate the absolute value of a given
  integer using ternary operator.*/
}