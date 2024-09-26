#include <stdio.h>

size_t my_strlen(const char* str) {
    size_t length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello World";
    printf("Length of string: %lu\n", my_strlen(str));
    return 0;
}

