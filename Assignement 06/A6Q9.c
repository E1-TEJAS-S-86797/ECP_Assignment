#include <stdio.h>
#include <string.h>

void findAndReplace(char *str, const char *find, const char *replace) {
    char buffer[1000];
    char *pos;

    pos = strstr(str, find);
    if (pos) {
        strncpy(buffer, str, pos - str);
        buffer[pos - str] = '\0';
        strcat(buffer, replace);
        strcat(buffer, pos + strlen(find));
        strcpy(str, buffer);
    }
}

int main() {
    char str[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    printf("Original string: %s\n", str);
    findAndReplace(str, find, replace);
    printf("Modified string: %s\n", str);

    return 0;
}

