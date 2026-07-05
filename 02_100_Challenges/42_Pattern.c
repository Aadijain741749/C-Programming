#include <stdio.h>
int main()
{
  int rows;
  printf("Welcome to Printing Patterns.\n");
  printf("Please, enter the no. of rows: ");
  scanf("%d", &rows);
  
  printf("Here is the right half pyramid.\n");
  for(int i = 1; i <= rows; i++){
    printf("\n");
    for(int j = 0; j < i; j++){
      printf("* ");
    }
  }
  printf("\n\nHere is the reverse right half pyramid.\n");
  for(int i = 0; i <= rows; i++){
    printf("\n");
    for(int j = 0; j < rows - i; j++){
      printf("* ");
    }
  }
  printf("Here is the left half pyramid.\n");
  for(int i = 1; i <= rows; i++){
    printf("\n");
    for(int k = 0; k < rows - i; k++){
      printf("  ");
    }
    for(int j = 0; j < i; j++){
      printf("* ");
    }
  }


  return 0;
  /*Create a program that print patterns*/
}