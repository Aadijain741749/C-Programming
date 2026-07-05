#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Prime Number Checker.\n");
  printf("Please, enter the number: ");
  scanf("%d", &num);
    
  for(int i = 2; i < num; i++){
    if(num % i == 0){
      printf("%d is not prime number.\n", num);
      return 0;
    }
  }
  printf("%d is prime number.\n", num);
  return 0;

  /*Create a program using for to display if a number is prime or not.*/
}