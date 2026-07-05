#include <stdio.h>

struct STUDENT {
    char student_id[20]; 
    char name[50];     
    int age;             
    float total_marks;   
};

int main() {
    struct STUDENT s1 = {"S101", "Aadi Jain", 18, 84.5};

    printf("--- Student Record ---\n");
    printf("Student ID: %s\n", s1.student_id);
    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", s1.age);
    printf("Total Marks: %.2f\n", s1.total_marks);

    return 0;
}