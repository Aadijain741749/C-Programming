#include <stdio.h> 
int main()
{
  int first, second;
  printf("Welcome to GCD number calculator.\n");
  printf("Please, enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second numver: ");
  scanf("%d", &second);

  int min = first > second ? first : second;
  for (int i = min; i>=1; i--){
    if(first % i ==0 && second % i == 0){
      printf("The GCD of %d and %d is %d", first, second, i);
      break;
    }
  }
  return 0;

  /*Create a program to find the Greatest Common Divisor (GCD) of two
  integers.*/
}