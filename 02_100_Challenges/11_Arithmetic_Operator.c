#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Please, enter the two numbers: ");
  scanf("%d%d", &num1, &num2);
  printf("You enteresd the two numbers %d and %d\n", num1, num2);

  printf("Here are the result of operations.\n");
  printf("%d + %d = %d.\n", num1, num2, (num1 + num2));
  printf("%d - %d = %d.\n", num1, num2, (num1 - num2));
  printf("%d * %d = %d.\n", num1, num2, (num1 * num2));
  printf("%d / %d = %d.\n", num1, num2, (num1 / num2));
  printf("%d modulo %d = %d.\n", num1, num2, (num1 % num2));
  
  return 0;
  /*Create a program that takes two numbers and shows result of all
  arithmetic operators (+,-,*,/,%).*/
}