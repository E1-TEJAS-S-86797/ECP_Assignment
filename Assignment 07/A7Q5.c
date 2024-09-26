#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void acceptNames(char *names[5]) {
    printf("Enter 5 student names:\n");
    for (int i = 0; i < 5; i++) {
        names[i] = (char *)malloc(20 * sizeof(char));
        scanf("%s", names[i]);
    }
}

void printNames(char *names[5]) {
    printf("Student names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
}

void sortNames(char *names[5]) {
    char *temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void freeNames(char *names[5]) {
    for (int i = 0; i < 5; i++) {
        free(names[i]);
    }
}

int main() {
    char *names[5];
    acceptNames(names);
    printNames(names);
    
    sortNames(names);
    printf("Sorted names:\n");
    printNames(names);
    
    freeNames(names);
    return 0;
}
