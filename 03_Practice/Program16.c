#include <stdio.h>
int main()
{
  int num, reverse = 0;
  printf("Please, enter the number: ");
  scanf("%d", &num);
  int copy = num;
  
  while(copy > 0){
    reverse = (reverse*10) + (copy%10);
    copy = (copy / 10);
  }
  printf("The reverse of a number %d is %d", num, reverse);
  return 0;
}