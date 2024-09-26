#include <stdio.h>

void acceptArray(int arr[3][3]) {
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int arr[3][3]) {
    printf("Matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3];
    acceptArray(arr);
    printArray(arr);
    return 0;
}
