#include <stdio.h>

int sumRow(int arr[3][3], int row) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[row][i];
    }
    return sum;
}

int sumColumn(int arr[3][3], int col) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i][col];
    }
    return sum;
}

int main() {
    int arr[3][3];
    acceptArray(arr);
    
    int row, col;
    printf("Enter row number (0-2) to calculate sum: ");
    scanf("%d", &row);
    printf("Sum of row %d: %d\n", row, sumRow(arr, row));
    
    printf("Enter column number (0-2) to calculate sum: ");
    scanf("%d", &col);
    printf("Sum of column %d: %d\n", col, sumColumn(arr, col));
    
    return 0;
}
