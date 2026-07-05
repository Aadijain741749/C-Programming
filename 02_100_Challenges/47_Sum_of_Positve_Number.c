#include <stdio.h>
int main()
{
  int num;
  int sum = 0;
  printf("Welcome to Adding Positve Numbers.c\n");
  do{
    printf("Please, enter the number: ");
    scanf("%d", &num);
    
    sum += num;
  } while(num != 0);
  
  printf("The sum of all positive number is %d", sum);
  return 0;
  
  /*Create a program using continue to sum all positive numbers entered
  by the user; skip any negative numbers.*/
}