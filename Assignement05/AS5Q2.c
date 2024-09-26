#include <stdio.h>

// Function to accept array elements from the user
void acceptArrayElements(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print array elements
void printArrayElements(int arr[], int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    // Ask user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare the array with the given size
    int arr[size];

    // Accept array elements from the user
    acceptArrayElements(arr, size);

    // Print the array elements
    printArrayElements(arr, size);

    return 0;
}
