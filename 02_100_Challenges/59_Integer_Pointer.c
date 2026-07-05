#include <stdio.h>

int main(){
  int num;
  int* ptr = &num;
  printf("Welcome to showcasing integer pointers.\n");
  printf("Please, enter the value: ");
  scanf("%d", ptr);

  printf("The value of num is %d\n", *ptr);
  printf("The value of num is %d\n", num);
  return 0;
}
/*Write a program that declares an integer variable and a pointer to it.
Assign a value and print it using the pointer.*/