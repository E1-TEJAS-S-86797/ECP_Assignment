#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool is_leap_year(int year) {
    // A year is a leap year if:
    // - It is divisible by 4, and
    // - It is not divisible by 100, unless
    // - It is also divisible by 400
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) return true;
            else return false;
        } else return true;
    } else return false;
}

// Function to print the number of days in a given month of a given year
void days_in_month(int month, int year) {
    // Validate month
    if (month < 1 || month > 12) {
        printf("Error: Month should be between 1 and 12.\n");
        return;
    }

    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31; // January, March, May, July, August, October, December
            break;
        case 4: case 6: case 9: case 11:
            days = 30; // April, June, September, November
            break;
        case 2:
            if (is_leap_year(year)) {
                days = 29; // February in a leap year
            } else {
                days = 28; // February in a non-leap year
            }
            break;
        default:
            days = 0; // Should never reach here due to earlier validation
            break;
    }

    printf("Month %d of year %d has %d days.\n", month, year, days);
}

// Example usage
int main() {
    int month = 2; // February
    int year = 2024; // Example year

    // Check if year is a leap year
    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    // Print number of days in the specified month
    days_in_month(month, year);

    return 0;
}

