#include <stdio.h>
#include <string.h>

int main() {
    // Declare a string (character array)
    char str[] = "Hello, C Programming!";

    // Use strlen() to get the length of the string
    int length = strlen(str);

    // Display the length of the string
    printf("The string is: %s\n", str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
