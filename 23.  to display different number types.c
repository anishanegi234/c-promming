#include <stdio.h>

int main() {
    // Declare variables of different number types
    int integerNum = 25;
    float floatNum = 3.14;
    double doubleNum = 12345.6789;
    char character = 'A';

    // Display the values and types
    printf("Displaying different number types:\n\n");

    // Integer type
    printf("Integer:\n");
    printf("Value: %d\n", integerNum);
    printf("Size: %lu bytes\n\n", sizeof(integerNum));

    // Float type
    printf("Float:\n");
    printf("Value: %.2f\n", floatNum);
    printf("Size: %lu bytes\n\n", sizeof(floatNum));

    // Double type
    printf("Double:\n");
    printf("Value: %.4lf\n", doubleNum);
    printf("Size: %lu bytes\n\n", sizeof(doubleNum));

    // Character type
    printf("Character:\n");
    printf("Value: %c\n", character);
    printf("ASCII Value: %d\n", character);
    printf("Size: %lu bytes\n\n", sizeof(character));

    return 0;
}
