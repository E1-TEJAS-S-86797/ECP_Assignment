#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    char *start = dest;
    while ((*dest++ = *src++));
    return start;
}

int main() {
    char dest[50];
    char src[] = "Hello World";
    my_strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}

