#include <stdio.h>
int main()
{

  int num1 = 1;
  while (num1 <= 10) {
    printf("%d\n", num1);
    num1 = num1 + 1;
  }
  printf("First Loop has ended.\n");

  int num2 = 10;
  while (num2 > 0) {
    printf("%d\n", num2);
    num2--;
  }
  printf("Second Loop has ended.\n");
  return 0;
}