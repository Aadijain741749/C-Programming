#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to printing tables.\n");
  printf("Please, enter the number: ");
  scanf("%d", &num);
  
  int i = 1;
  while(i<=10){
    printf("%d X %d = %d\n", num, i, num*i);
    i++;
  }
  return 0;
}
/*Develop a program that prints the multiplication table for a given number.*/