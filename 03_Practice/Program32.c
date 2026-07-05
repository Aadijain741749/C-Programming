#include <stdio.h>

struct STUDENTS {
    char student_id[20];
    char student_name[50];
    int student_age;
    float total_marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct STUDENTS s[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", s[i].student_id);
        printf("Name: ");
        scanf(" %[^\n]s", s[i].student_name); 
        printf("Age: ");
        scanf("%d", &s[i].student_age);
        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }

    printf("\n--- Student Records ---\n");
    printf("ID\tName\t\tAge\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%s\t%s\t\t%d\t%.2f\n", 
               s[i].student_id, s[i].student_name, s[i].student_age, s[i].total_marks);
    }

    return 0;
}