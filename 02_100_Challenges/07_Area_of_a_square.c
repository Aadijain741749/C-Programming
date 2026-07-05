#include <stdio.h>
int main()
{
  int Side;
  int Area;

  printf("Please enter side of the square in cm: ");
  scanf("%d",&Side);

  Area = Side*Side;
  printf("The area of the square is %d cm*cm", Area);
  return 0;
}
/* Create a program to print the area of a square by inputting its side
length. */
