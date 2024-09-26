#include <stdio.h>

char* my_itoa(int num, char *str, int base) {
    int i = 0;
    int isNegative = 0;

    // Handle 0 explicitly
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // Handle negative numbers if base is 10
    if (num < 0 && base == 10) {
        isNegative = 1;
        num = -num;
    }

    // Process individual digits
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }

    // If number is negative
    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '\0'; // Null terminate the string

    // Reverse the string
    int start = 0, end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}

int main() {
    char str[20];
    printf("Base 10: %s\n", my_itoa(156, str, 10));
    printf("Base 16: %s\n", my_itoa(156, str, 16));
    printf("Base 2: %s\n", my_itoa(156, str, 2));
    return 0;
}

