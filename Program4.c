#include <stdio.h>
int main()
{
  int first, second;
  printf("Please, enter the two numbers: ");
  scanf("%d%d", &first, &second);
  printf("You entered the two numbers %d and %d.\n", first, second);

  if(first == second){
    printf("Your numbers are equal.");
  }
  else{
    printf("YOur numbers are not equal.");
  }

  return 0;
}