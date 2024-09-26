#include<stdio.h>
//Function to perform linear search in array (return index)
void linearSearch() {
    int size, target, index = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
}

int main() {
    linearSearch();
    return 0;
}

