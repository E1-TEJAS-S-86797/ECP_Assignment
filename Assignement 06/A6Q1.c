#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    
    // a. strlen()
    printf("Length of str1: %lu\n", strlen(str1));
    
    // b. strcpy()
    strcpy(str2, str1);
    printf("After strcpy, str2: %s\n", str2);
    
    // c. strcat()
    strcat(str1, " World");
    printf("After strcat, str1: %s\n", str1);
    
    // d. strcmp()
    printf("strcmp result: %d\n", strcmp(str1, str2));
    
    // e. stricmp() (not standard in C, consider using _stricmp in some environments)
    // printf("stricmp result: %d\n", stricmp(str1, str2)); // Not available in all compilers
    
    // f. strrev()
    printf("Reversed str1: %s\n", strrev(str1));
    
    // g. strchr()
    printf("First occurrence of 'o' in str1: %s\n", strchr(str1, 'o'));
    
    // h. strstr()
    printf("Substring 'ell' in str1: %s\n", strstr(str1, "ell"));
    
    // i. strncpy()
    strncpy(str2, "NewString", 3);
    printf("After strncpy, str2: %s\n", str2);
    
    // j. strncat()
    strncat(str2, "Addition", 4);
    printf("After strncat, str2: %s\n", str2);
    
    // k. strncmp()
    printf("strncmp result: %d\n", strncmp(str1, str2, 4));
    
    // l. strtok()
    char str3[50] = "This-is-a-sample";
    char* token = strtok(str3, "-");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, "-");
    }
    
    return 0;
}

