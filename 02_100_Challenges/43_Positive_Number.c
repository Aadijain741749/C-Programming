#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Ziddi number checker.\n");
  
  do{
    printf("Please, enter positive number: ");
    scanf("%d", &num);
  } while(num <= 0);
  printf("Ypu have sucessfully entered a positive number.\n");
  return 0;
  /*Create a program that prompts the user to enter a positive number.Use a do-while loop to keep asking for the number until the userenters a valid positive number.*/
}