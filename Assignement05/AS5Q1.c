#include <stdio.h>

int main() {
    // Declare variables
    float marks[5];
    float total = 0.0;
    float average;
    int i;

    // Input marks for five subjects
    printf("Enter marks for five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        // Adding the mark to the total
        total += marks[i];
    }

    // Calculate average
    average = total / 5;

    // Print the results
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

