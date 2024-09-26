#include <stdio.h>

// Task 6: Function to remove duplicate elements from array
void removeDuplicates() {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int uniqueCount = 0;
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            arr[uniqueCount++] = arr[i];
        }
    }
    
    printf("Array with unique elements: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of unique elements: %d\n", uniqueCount);
}

int main() {
    removeDuplicates();
    return 0;
}
