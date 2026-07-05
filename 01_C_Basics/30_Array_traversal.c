#include <stdio.h>
int main(){
  int marks[10];

  for(int i = 0; i < 10; i++){
    printf("Please, enter the marks for student %d: ", (i+1));
    scanf(" %d", &marks[i]);
  }
  for(int i = 0; i < 10; i++){
    printf("\nMarks of strudent %d are: %d", (i+1), marks[i]);
  }
  return 0;
}
