#include <stdio.h>
#include <string.h>

int main() {
    // Declare two character arrays (strings)
    char source[] = "Hello, World!";
    char destination[50];  // Ensure it has enough space for the copied string

    // Use strcpy() to copy the source string to destination
    strcpy(destination, source);

    // Display the source and destination strings
    printf("Source string: %s\n", source);
    printf("Destination string (after strcpy): %s\n", destination);

    return 0;
}
