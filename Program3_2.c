#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Please, enter the two variables: \n");
  scanf("%d %d", &a, &b);
  printf("You entered the two variables %d and %d.\n", a, b);

  c = a;
  a = b;
  b = c;
  printf("The two variables after swapping are %d and %d", a, b);
  return 0;
}