#include <stdio.h>
int main(){
  int marks[5];
  
  printf("Please, enter the marks for student 1: ");
  scanf("%d", &marks[0]);
  printf("Please, enter the marks for student 2: ");
  scanf("%d", &marks[1]);
  printf("Please, enter the marks for student 3: ");
  scanf("%d", &marks[2]);
  printf("Please, enter the marks for student 4: ");
  scanf("%d", &marks[3]);
  printf("Please, enter the marks for student 5: ");
  scanf("%d", &marks[4]);
 
 
  printf("\nMarks of student 1 are: %d", marks[0]);
  printf("\nMarks of student 2 are: %d", marks[1]);
  printf("\nMarks of student 3 are: %d", marks[2]);
  printf("\nMarks of student 4 are: %d", marks[3]);
  printf("\nMarks of student 5 are: %d", marks[4]);
  return 0;
}
