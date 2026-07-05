#include <stdio.h>
int main()
{
  int num, sum = 0; 
  printf("Please, enter the number: ");
  scanf("%d", &num);
  int copy = num;
  while (copy > 0){
    sum += (copy % 10);
    copy = (copy / 10);
  }
  printf("The sum of the digit of %d is %d.\n", num, sum);
  return 0;
}