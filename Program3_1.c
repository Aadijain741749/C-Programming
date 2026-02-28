#include <stdio.h>
int main()
{
  int a, b;
  printf("Please, enter the two variables: \n");
  scanf("%d %d", &a, &b);
  printf("You entered the two variables %d and %d.\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("The two variables after swapping are %d and %d", a, b);
  return 0;
}