#include <stdio.h>
int main()
{
  const float pi = 3.14159;
  float r;
  printf("Please, enter the radius of your circle in cm: ");
  scanf("%f", &r);
  printf("The area of your circle is %f cm*cm: ", pi*r*r);
  return 0;
}
/*Create a program to print the area of a circle by inputting its radius.*/
