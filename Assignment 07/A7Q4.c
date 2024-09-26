#include <stdio.h>
#include <string.h>

void acceptNames(char names[5][20]) {
    printf("Enter 5 student names:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }
}

void printNames(char names[5][20]) {
    printf("Student names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
}

void sortNames(char names[5][20]) {
    char temp[20];
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][20];
    acceptNames(names);
    printNames(names);
    
    sortNames(names);
    printf("Sorted names:\n");
    printNames(names);
    
    return 0;
}
