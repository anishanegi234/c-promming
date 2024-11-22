#include <stdio.h>
#include <string.h>

int main() {
    // Declare two strings
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    // Use strcat() to concatenate str2 to str1
    strcat(str1, str2);

    // Display the concatenated result
    printf("Concatenated string: %s\n", str1);

    return 0;
}
