#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void acceptStudentInfo(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNo);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void displayStudentInfo(struct Student s) {
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

void acceptArrayOfStudents(struct Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d\n", i + 1);
        acceptStudentInfo(&arr[i]);
    }
}

void displayArrayOfStudents(struct Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Details of student %d\n", i + 1);
        displayStudentInfo(arr[i]);
    }
}

int main() {
    int size;
    printf("Enter number of students: ");
    scanf("%d", &size);
    
    struct Student students[size];
    
    acceptArrayOfStudents(students, size);
    displayArrayOfStudents(students, size);
    
    return 0;
}

