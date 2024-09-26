#include <stdio.h>

void intToRoman(int num) {
    struct Roman {
        int value;
        const char *symbol;
    } romanSymbols[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, 
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, 
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    int i = 0;
    while (num > 0) {
        while (num >= romanSymbols[i].value) {
            printf("%s", romanSymbols[i].symbol);
            num -= romanSymbols[i].value;
        }
        i++;
    }
}

int main() {
    int number = 3549;
    printf("Roman numeral of %d is: ", number);
    intToRoman(number);
    printf("\n");
    return 0;
}

