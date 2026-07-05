#include <stdio.h>

struct Student{
  int roll_no;
  char name[20];
  float marks;
};

void print_student(struct Student stu);

int main(){
  
  struct Student student = {1, "Ram", 45.5};
  struct Student *stu_ptr = &student;

  print_student(student);
  print_student(*stu_ptr);

  return 0;
}

void print_student(struct Student stu){
  printf("\nRoll no.: %d, Name: %s, Marks: %.2f", stu.roll_no, stu.name, stu.marks);
}