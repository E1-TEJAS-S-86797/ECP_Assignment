#include <stdio.h>

// Global variables to store the results
int sum;
int product;

// Function to calculate the sum and product of two numbers
void calculateSumAndProduct(int a, int b) {
    sum = a + b;
    product = a * b;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to calculate sum and product
    calculateSumAndProduct(num1, num2);

    // Output the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

