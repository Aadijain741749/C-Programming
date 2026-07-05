#include <stdio.h>
int main()
{
  int number;
  printf("Please, enter an number: ");
  scanf("%d", &number);
  
  float floating = number;
  printf("Original Number is %d.\n", number);
  printf("Float converted Number is %f", floating);
  return 0;
  /*Given an integer value, convert it to a floating-point value and print
  both.*/
}