#include <stdio.h>
int main()
{
  int first, second, temp;
  printf("Please enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second number: ");
  scanf("%d", &second);

  temp = first;
  first = second;
  second = temp;

  printf("The value of first is %d and secnond is %d", first, second);
  return 0;
}
/*Create a program to swap two numbers.*/