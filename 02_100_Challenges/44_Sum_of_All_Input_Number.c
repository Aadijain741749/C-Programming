#include <stdio.h>
int main()
{
  int num;
  int sum = 0;
  printf("Welcome to Number Adder.\n");

  do{
    printf("Please, enter your number: ");
    scanf("%d", &num);
    sum += num;
  } while (num != 0);
  printf("The sum of all your numbers is: %d", sum);
  return 0;
}
/*Develop a program that calculates the sum of all numbers entered by
a user until the user enters 0. The total sum should then be displayed.*/