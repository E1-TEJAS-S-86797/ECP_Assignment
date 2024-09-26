#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void searchByRollNo(struct Student arr[], int size, int rollNo) {
    for (int i = 0; i < size; i++) {
        if (arr[i].rollNo == rollNo) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", arr[i].rollNo);
            printf("Name: %s\n", arr[i].name);
            printf("Marks: %.2f\n", arr[i].marks);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNo);
}

void searchByName(struct Student arr[], int size, char name[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", arr[i].rollNo);
            printf("Name: %s\n", arr[i].name);
            printf("Marks: %.2f\n", arr[i].marks);
            return;
        }
    }
    printf("Student with name %s not found.\n", name);
}

int main() {
    struct Student students[3] = {
        {101, "John", 89.5},
        {102, "Alice", 76.8},
        {103, "Bob", 90.3}
    };
    
    int rollNo;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNo);
    searchByRollNo(students, 3, rollNo);
    
    char name[50];
    printf("Enter name to search: ");
    scanf("%s", name);
    searchByName(students, 3, name);
    
    return 0;
}

