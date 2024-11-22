#include <stdio.h>
#include <string.h>

int main() {
    // Declare two strings
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    // Use strcmp() to compare the strings
    int result1 = strcmp(str1, str2);  // Compare equal strings
    int result2 = strcmp(str1, str3);  // Compare different strings

    // Display the results of the comparisons
    printf("Comparing '%s' and '%s':\n", str1, str2);
    if (result1 == 0) {
        printf("The strings are equal.\n");
    } else if (result1 < 0) {
        printf("'%s' is lexicographically less than '%s'.\n", str1, str2);
    } else {
        printf("'%s' is lexicographically greater than '%s'.\n", str1, str2);
    }

    printf("\nComparing '%s' and '%s':\n", str1, str3);
    if (result2 == 0) {
        printf("The strings are equal.\n");
    } else if (result2 < 0) {
        printf("'%s' is lexicographically less than '%s'.\n", str1, str3);
    } else {
        printf("'%s' is lexicographically greater than '%s'.\n", str1, str3);
    }

    return 0;
}
