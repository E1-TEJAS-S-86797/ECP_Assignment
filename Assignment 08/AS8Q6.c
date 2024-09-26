#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int standard;
    union {
        char grade[2];
        float percentage;
    } result;
};

void acceptStudentInfo(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNo);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter standard: ");
    scanf("%d", &s->standard);
    
    if (s->standard <= 4) {
        printf("Enter grade (A/B/C): ");
        scanf("%s", s->result.grade);
    } else {
        printf("Enter percentage: ");
        scanf("%f", &s->result.percentage);
    }
}

void displayStudentInfo(struct Student s) {
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Standard: %d\n", s.standard);
    
    if (s.standard <= 4) {
        printf("Grade: %s\n", s.result.grade);
    } else {
        printf("Percentage: %.2f\n", s.result.percentage);
    }
}

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        acceptStudentInfo(&students[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        displayStudentInfo(students[i]);
    }
    
    return 0;
}

