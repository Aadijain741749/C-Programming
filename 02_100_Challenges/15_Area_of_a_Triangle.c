#include <stdio.h>
int main()
{
  float breadth, height;
  printf("Welcome to area calculator.");
  printf("Please, enter the breadth of triangle in cms: ");
  scanf("%f", &breadth);
  printf("Now, enter the height of triangle in cms: ");
  scanf("%f", &height);

  float area = (1/2.0 * breadth * height);
  printf("The area of your triangle is %.2f", area);
  return 0;
  /*Create a program to calculate the Area of a Triangle.
  Area of triangle = ½*B*H*/
}