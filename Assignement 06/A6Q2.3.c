#include <stdio.h>

char* my_strcat(char *dest, const char *src) {
    char *start = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return start;
}

int main() {
    char dest[50] = "Hello";
    char src[] = " World";
    my_strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
    return 0;
}

