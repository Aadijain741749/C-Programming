#include <stdio.h>

int main(){
  char character;
  char *ptr = &character;
  printf("Welcome to showxasing character pointers.\n");
  printf("Please, enter the value: ");
  scanf(" %c", ptr);

  printf("The value of char is: %c.\n", *ptr);
  printf("The value of char is: %c.\n", character);
  return 0;
}
/*Declare a pointer to a char and use it to read and print a character
entered by the user.*/