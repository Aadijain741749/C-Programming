#include <stdio.h>
int main()
{
  int age;
  char is_indian;
  printf("Welcome to ARTO.\n");
  printf("Please, enter your age: ");
  scanf(" %d", &age);
  printf("Are you an indian citizen(Y/N): ");
  scanf(" %c", &is_indian);

  if(is_indian == 'Y' && age >= 18 && age < 70){
    printf("You are eligible for license.\n");
  } else{
    printf("You are not eligible for a license.\n");
  }
  printf("Your age is %d", age);
  return 0;
}
