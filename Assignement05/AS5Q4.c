#include<stdio.h>
void findMaximum() {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Maximum element is: %d\n", max);
}

int main() {
    findMaximum();
    return 0;
}
