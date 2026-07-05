#include <stdio.h>

struct Student{
  int roll_no;
  char name[20];
  float marks;
};

int main(){
  //Direct Initialization
  struct Student s1 = {1, "Ram", 99.89};
  //Designated Initialization
  struct Student s2 = {.name = "Shyam", .marks = 70.12, .roll_no = 2};
  //Zero Initialization
  struct Student s3 = {0};
  //Copy Initialization
  struct Student s4 = s1;
  s4.roll_no = 4;

  printf("Roll No.: %d, Name: %s, Marks: %.2f\n", s1.roll_no, s1.name, s1.marks);
  
  printf("Roll No.: %d, Name: %s, Marks: %.2f\n", s2.roll_no, s2.name, s2.marks);

  printf("Roll No.: %d, Name: %s, Marks: %.2f\n", s3.roll_no, s3.name, s3.marks);

  printf("Roll No.: %d, Name: %s, Marks: %.2f\n", s4.roll_no, s4.name, s4.marks);

  return 0;
}