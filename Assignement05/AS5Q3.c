#include <stdio.h>

// Task 3: Function to reverse array elements
void reverseArray() {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Reversing the array
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    reverseArray();
    return 0;
}
