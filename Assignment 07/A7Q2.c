#include <stdio.h>

void addMatrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[3][3], b[3][3], result[3][3];
    printf("Enter first matrix:\n");
    acceptArray(a);
    printf("Enter second matrix:\n");
    acceptArray(b);
    
    addMatrices(a, b, result);
    printf("Addition of matrices:\n");
    printArray(result);
    
    subtractMatrices(a, b, result);
    printf("Subtraction of matrices:\n");
    printArray(result);
    
    multiplyMatrices(a, b, result);
    printf("Multiplication of matrices:\n");
    printArray(result);
    
    return 0;
}
