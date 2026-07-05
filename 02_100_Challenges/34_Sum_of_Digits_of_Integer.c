#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to sum of digit of integer calculator.\n");
  printf("Please, enter an number: ");
  scanf("%d", &num);
  
  int sum = 0;
  int copy = num;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  printf("The sum of digits of %d is %d\n", copy, sum);
  return 0;

  /*Create a program that computes the sum of the digits of an integer.*/
}