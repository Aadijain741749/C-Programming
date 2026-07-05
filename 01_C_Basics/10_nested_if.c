#include <stdio.h>
int main()
{
  int age;
  char is_indian;
  printf("Welcome to ARTO.\n");
  printf("Please, enter your age: ");
  scanf("%d", &age);
  printf("Are you an Indian Citizen(Y/N): ");
  scanf(" %c", &is_indian);

  if(is_indian == 'Y'){
    if(age < 18){
    printf("You are too young, please apply after you are 18.\n");
  }else if (age> 70){
    printf("You are senior, You can not apply anymore\n");
  }
  else{
    printf("You are eligible for a license.\n");
  }
  }
  else{
    printf("You are not Indian Citizen. So, Your cannot  not apply for license.\n");
  }
  printf("YOur age is %d", age);
  return 0;
}
