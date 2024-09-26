#include <stdio.h>

// Function to calculate the sum and product of two numbers
void calculateSumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1, num2;
    int sum, product;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to calculate sum and product
    calculateSumAndProduct(num1, num2, &sum, &product);

    // Output the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
