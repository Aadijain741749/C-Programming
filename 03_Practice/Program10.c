#include <stdio.h>
int main()
{
  int num,sum;
  printf("Please, enter the number: ");
  scanf("%d", &num);
  sum = 0;

  for(int i = 1; i <= num; i++){
    sum = sum + i;
  }
  printf("The sum of all numbers up to %d is %d", num, sum);
  return 0;
}