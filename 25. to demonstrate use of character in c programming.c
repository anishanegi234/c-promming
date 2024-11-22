#include <stdio.h>

int main() {
    // Declaring character variables
    char firstChar = 'A';
    char secondChar = 'z';

    // Displaying the characters
    printf("Demonstrating use of characters in C:\n\n");

    printf("First character: %c\n", firstChar);
    printf("Second character: %c\n", secondChar);

    // Displaying ASCII values of the characters
    printf("ASCII value of '%c': %d\n", firstChar, firstChar);
    printf("ASCII value of '%c': %d\n", secondChar, secondChar);

    // Performing arithmetic operations on characters
    char nextChar = firstChar + 1; // Next character in ASCII sequence
    printf("Next character after '%c': %c\n", firstChar, nextChar);

    // Converting lowercase to uppercase
    char lowercase = 'b';
    char uppercase = lowercase - 32; // ASCII difference between lowercase and uppercase letters
    printf("Uppercase equivalent of '%c': %c\n", lowercase, uppercase);

    // Checking if a character is a digit
    char digitChar = '5';
    if (digitChar >= '0' && digitChar <= '9') {
        printf("'%c' is a digit.\n", digitChar);
    } else {
        printf("'%c' is not a digit.\n", digitChar);
    }

    return 0;
}
