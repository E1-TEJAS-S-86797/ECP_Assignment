#include <stdio.h>

// Function to print the Fibonacci series up to a given number of terms
void print_fibonacci(int n) {
    // Validate input
    if (n <= 0) {
        printf("Error: The number of terms must be a positive integer.\n");
        return;
    }

    // First two Fibonacci numbers
    int a = 0, b = 1;

    // Print the Fibonacci series
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            int next = a + b;
            printf(" %d", next);
            a = b;
            b = next;
        }
    }
    printf("\n"); // Print a newline after the series
}

// Example usage
int main() {
    int terms = 10; // Change this number to print a different number of terms
    print_fibonacci(terms); // Output: 0 1 1 2 3 5 8 13 21 34
    return 0;
}
