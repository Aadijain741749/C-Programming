#include <stdio.h>
int main()
{
  int age;
  printf("Welcome to Age Calculator.\n");
  printf("Please, enter your age: ");
  scanf(" %d", &age);

  if(age<13){
    printf("You are child.\n");
  }
  else if(age<20){
    printf("You are teen.\n");
  }
  else if(age<60){
    printf("You are adult.\n");
  }
  else{
    printf("You are senior.\n");
  }
  return 0;
  /*Create a program that categorize a person into different age groups*/
}