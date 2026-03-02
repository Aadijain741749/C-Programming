#include <stdio.h>
int main()
{
  int number;
  printf("Please, enter the number: ");
  scanf("%d", &number);
  printf("You entered the number %d\n", number);

  if(number % 2 == 0){
    printf("Your number is even.");
  }
  else{
    printf("Your number is odd.");
  }
  return 0;
}