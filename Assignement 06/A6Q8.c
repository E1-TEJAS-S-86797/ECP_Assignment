#include <stdio.h>

void numToWords(int n) {
    char *single_digits[] = { "zero", "one", "two", "three", "four",
                              "five", "six", "seven", "eight", "nine"};
    
    char *two_digits[] = { "ten", "eleven", "twelve", "thirteen", "fourteen",
                           "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    char *tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty",
                              "sixty", "seventy", "eighty", "ninety"};
    
    if (n < 10) {
        printf("%s ", single_digits[n]);
    } else if (n >= 10 && n < 20) {
        printf("%s ", two_digits[n - 10]);
    } else if (n >= 20 && n < 100) {
        printf("%s ", tens_multiple[n / 10]);
        if (n % 10 != 0) {
            printf("%s ", single_digits[n % 10]);
        }
    } else {
        printf("Number out of supported range.\n");
    }
}

int main() {
    int num = 42;
    printf("Number in words: ");
    numToWords(num);
    printf("\n");
    return 0;
}

