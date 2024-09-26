#include <stdio.h>

void my_findAndReplace(char *str, const char *find, const char *replace) {
    char buffer[1000];
    int i = 0, j = 0, k = 0;
    int find_len = 0, replace_len = 0;

    // Calculate lengths of find and replace
    while (find[find_len] != '\0') find_len++;
    while (replace[replace_len] != '\0') replace_len++;

    while (str[i] != '\0') {
        // Check if substring matches
        for (j = 0; j < find_len && str[i + j] == find[j]; j++);

        // If match found, replace
        if (j == find_len) {
            for (k = 0; k < replace_len; k++) {
                buffer[i + k] = replace[k];
            }
            i += find_len;
        } else {
            buffer[i + j] = str[i + j];
            i++;
        }
    }

    buffer[i] = '\0'; // Null terminate
    for (i = 0; buffer[i] != '\0'; i++) {
        str[i] = buffer[i];
    }
    str[i] = '\0';
}

int main() {
    char str[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    printf("Original string: %s\n", str);
    my_findAndReplace(str, find, replace);
    printf("Modified string: %s\n", str);

    return 0;
}

