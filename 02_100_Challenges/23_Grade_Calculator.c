#include <stdio.h>
int main()
{
  int marks;
  printf("Please, enter the marks: ");
  scanf(" %d", &marks);

  if(marks > 90){
    printf("You have got grade A.\n");
  }else if(marks > 75){
    printf("You have got grade B.\n");
  }else if(marks > 60){
    printf("You have got grade C.\n");
  }else if(marks > 30){
    printf("You have got grade D.\n");
  }else{
    printf("You have got grade F.\n");
  }
  return 0;
  /*Create a program that calculates grades based on marks*/
}