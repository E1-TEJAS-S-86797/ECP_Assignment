#include <stdio.h>

void removeChar(char *str, char ch) {
    char *src, *dst;
    src = dst = str;
    
    while (*src) {
        if (*src != ch) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[] = "Hello World";
    removeChar(str, 'l');
    printf("String after removal: %s\n", str);
    return 0;
}

