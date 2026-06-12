#include <stdio.h>

struct Student{
  int roll_no;
  char name[20];
  float marks;
};

int main(){
  int a = 5; 
  int *ptr = &a;

  struct Student student = {1, "Ram", 45.5};
  struct Student *stu_ptr = &student;
  
  printf("\nRoll No.: %d, Name: %s, Marks: %.2f", student.roll_no, student.name, student.marks);

  printf("\nRoll No.: %d, Name: %s, Marks: %.2f", (*stu_ptr).roll_no, (*stu_ptr).name, (*stu_ptr).marks);

   printf("\nRoll No.: %d, Name: %s, Marks: %.2f", stu_ptr->roll_no, stu_ptr->name, stu_ptr->marks);
   
  return 0;
}