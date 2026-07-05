#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Printing tables.\n");
  printf("Please, enter your number: ");
  scanf("%d", &num);

  for(int i = 1; i <= 10; i++){
    printf("%d X %d = %d\n", num, i, num*i);
  }
  return 0;
}
/*Create a program using for loop multiplication table for a number.*/