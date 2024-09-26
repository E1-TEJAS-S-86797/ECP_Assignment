#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("List of names from command line arguments:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
