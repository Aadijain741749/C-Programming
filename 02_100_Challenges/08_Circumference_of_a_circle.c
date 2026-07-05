#include <stdio.h>
int main()
{
  const float pi = 3.14159;
  float r;
  printf("Please, enter the radius of your circle in cm: ");
  scanf("%f", &r);
  printf("The circumfernce of your circle is %f cm.", 2*pi*r);
  return 0;
}
/*Create a program to define a constant for the mathematical value
pi (3.14159) and use it to calculate and print the circumference of a
circle with a radius input from user.*/
