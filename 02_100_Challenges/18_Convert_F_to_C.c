#include <stdio.h>
int main()
{
  float f;
  printf("Welcome to temperature calculator.\n");
  printf("Please, enter the temp in F: ");
  scanf("%f", &f);

  float c = ((f-32) * 5.0 / 9);
  printf("Temperature in C is %.2f.", c);
  return 0;
  /*Create a program to convert Fahrenheit to Celsius
  °C = (°F - 32) × 5/9*/
}