#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to facotrial calculator.\n");
  printf("Please, enter the number: ");
  scanf(" %d", &num);

  int i =1;
  long long fac = 1;
  while(i <= num){
    fac *= i;
    i++;
  }
  printf("The factorial of %d is %llu.", num, fac);
  return 0;
  
}