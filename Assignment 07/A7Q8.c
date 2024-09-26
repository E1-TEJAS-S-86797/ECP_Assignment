#include <stdio.h>
#include <string.h>

void sortNames(char *names[], int count) {
    char *temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    printf("Sorted list of names:\n");
    sortNames(argv + 1, argc - 1);  // Skip the first argument (program name)
    
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}
