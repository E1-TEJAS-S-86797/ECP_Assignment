#include <stdio.h>
#include <string.h>

void removeChars(char *str1, const char *str2) {
    int hash[256] = {0};
    char *src, *dst;
    
    // Mark characters in str2
    while (*str2) {
        hash[(unsigned char)*str2++] = 1;
    }
    
    // Remove characters in str1
    src = dst = str1;
    while (*src) {
        if (!hash[(unsigned char)*src]) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str1[] = "abcdef";
    char str2[] = "bd";
    removeChars(str1, str2);
    printf("Modified string: %s\n", str1);
    return 0;
}

