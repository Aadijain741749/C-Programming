#include <stdio.h>
int main()
{
  float a, b, c, d;
  printf("Welcome to perimeter of rectangel calculator.");
  printf("Please, enter the size of first side: ");
  scanf("%f", &a);
  printf("Now, enter the size of second side: ");
  scanf("%f", &b);
  printf("Now, enter the size of third side: ");
  scanf("%f", &c);
  printf("Now, enter the size of fourth side: ");
  scanf("%f", &d);

  float perimeter = (a + b + c + d);
  printf("The perimeter of your shape is %.2f", perimeter);
  return 0;
  /*Create a program to calculate Perimeter of a rectangle.
  Perimeter of rectangle ABCD = A+B+C+D*/
}