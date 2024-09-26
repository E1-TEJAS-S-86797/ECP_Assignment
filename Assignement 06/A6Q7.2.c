#include <stdio.h>

int romanToInt(char *s) {
    int num = 0, i = 0;

    while (s[i]) {
        if (s[i] == 'M') num += 1000;
        else if (s[i] == 'D') num += 500;
        else if (s[i] == 'C') {
            if (s[i + 1] == 'M' || s[i + 1] == 'D') num -= 100;
            else num += 100;
        }
        else if (s[i] == 'L') num += 50;
        else if (s[i] == 'X') {
            if (s[i + 1] == 'C' || s[i + 1] == 'L') num -= 10;
            else num += 10;
        }
        else if (s[i] == 'V') num += 5;
        else if (s[i] == 'I') {
            if (s[i + 1] == 'X' || s[i + 1] == 'V') num -= 1;
            else num += 1;
        }
        i++;
    }

    return num;
}

int main() {
    char roman[] = "MMMDXLIX";
    printf("Decimal of %s is: %d\n", roman, romanToInt(roman));
    return 0;
}

