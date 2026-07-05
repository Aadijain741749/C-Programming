#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to the world of Squares.\n\n");
  while(1){
    printf("\nPlease, enter the number: ");
    scanf("%d", &num);
    if(num == -1) break;
    printf("The square of %d is %d.", num, num*num);

  }
  return 0;
  /*Write a program that continuously reads integers from the user and prints their squares. Use an infinite loop and a break statement to exit when a special number (e.g., -1) is entered.*/
}