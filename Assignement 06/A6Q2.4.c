#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    printf("Comparison result: %d\n", my_strcmp(str1, str2));
    return 0;
}

