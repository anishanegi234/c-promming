#include <stdio.h>

int main() {
    // Method 1: Direct assignment using double quotes
    char str1[] = "Hello, World!";

    // Method 2: Character-by-character assignment
    char str2[6];
    str2[0] = 'H';
    str2[1] = 'e';
    str2[2] = 'l';
    str2[3] = 'l';
    str2[4] = 'o';
    str2[5] = '\0'; // Null-terminator to mark the end of the string

    printf("Demonstrating two ways to assign values to a string in C:\n\n");

    // Display the strings
    printf("String 1 (assigned directly): %s\n", str1);
    printf("String 2 (character-by-character): %s\n", str2);

    return 0;
}
