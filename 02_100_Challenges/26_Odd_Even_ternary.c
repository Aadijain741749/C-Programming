#include <stdio.h>
int main()
{
  int number;
  printf("Please, enter the number: ");
  scanf(" %d", &number);

  number % 2 == 0 ? printf("The number is even.\n") : printf("The number is odd.\n");
  return 0;

  /*Create a program to find if the given number is even or odd
  using ternary operator.*/
}