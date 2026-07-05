#include <stdio.h>
int main()
{
  int num1, num2, num3;
  printf("Please, enter the first number: ");
  scanf(" %d", &num1);
  printf("Now, enter the second number: ");
  scanf(" %d", &num2);
  printf("Now, enter the third number: ");
  scanf(" %d", &num3);

  if(num1 > num2 && num1 > num3){
    printf("%d is the greatest number.\n", num1);
  }
  else if(num2 > num3){
    printf("%d is the greatest number.\n", num2);
  }
  else{
    printf("%d is the greatest number.\n", num3);
  }

  return 0;
  /*Create a program that determines the greatest of the three
  numbers.*/
}