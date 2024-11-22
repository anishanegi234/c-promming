#include <stdio.h>

// Function to modify the value of a variable (call by value)
void modifyValue(int num) {
    printf("Inside modifyValue: Received num = %d\n", num);
    num = num * 2; // Modify the value
    printf("Inside modifyValue: Modified num = %d\n", num);
}

int main() {
    int value = 10;

    printf("Before function call: value = %d\n", value);

    // Call the function with value as an argument
    modifyValue(value);

    printf("After function call: value = %d\n", value);

    return 0;
}
