#include <stdio.h>
int main()
{
  float num1, num2;
  printf("Please, enter the two numbes: ");
  scanf("%f%f", &num1, &num2);
  printf("You entered the two numbers %.2f and %.2f.\n", num1, num2);

  float result = (num1 * num2);
  printf("Product of your numbers is %.2f.\n", result);
  return 0;
  /*Create a program to calculate product of two floating points numbers.*/
}
  