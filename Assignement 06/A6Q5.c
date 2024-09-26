#include <stdio.h>

int my_atoi(const char* str) {
    int res = 0, sign = 1;

    // Handle negative numbers
    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Not a valid number
        }
        res = res * 10 + (*str - '0');
        str++;
    }
    return res * sign;
}

int main() {
    char str[] = "-12345";
    printf("Converted number: %d\n", my_atoi(str));
    return 0;
}

