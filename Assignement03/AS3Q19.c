#include <stdio.h> 
 
	int main() 
{ 
    int i, j; 
 
    // Loop through numbers 1 to 20 
    for (i = 1; i <= 20; i++) { 
        printf("Multiplication Table of %d:\n", i); 
         
        // Loop for each number from 1 to 10 
        for (j = 1; j <= 10; j++) 
		{	
			printf("------------------------------------------------------------------------------\n"); 
            printf("|%d| x |%d| = |%d|\n", i, j, i * j); 
        } 
         
        printf("\n"); // Print a new line for better readability 
    } 
     
    return 0; 
} 
