#include <stdio.h>
int main()
{
  int marks;
  printf("Please, enter the marks: ");
  scanf(" %d", &marks);

  printf("Your marks in this category: ");
  marks > 80 ? printf("High.\n") : (marks >=50 ? printf("Moderate.\n") : printf("Low.\n"));
  return 0;

  /*Create a program to Based on a student's score, categorize as
  "High", "Moderate", or "Low" using the ternary operator.*/
}