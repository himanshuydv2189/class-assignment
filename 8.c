#include <stdio.h>
#include <string.h>

int main() {char str3[] = "Hello";
    char str4[] = "World";
    // Length comparison
    if (strlen(str3) == strlen(str4)) {
        printf("Length comparison using character array: Equal\n");
    } else {
        printf("Length comparison using character array: Not Equal\n");
    }
    return 0;
}