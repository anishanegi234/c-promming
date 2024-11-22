#include <stdio.h>

// Function to modify the value of a variable using call by reference
void modifyValue(int *num) {
    printf("Inside modifyValue: Received num = %d\n", *num);
    *num = *num * 2; // Modify the value through the pointer
    printf("Inside modifyValue: Modified num = %d\n", *num);
}

int main() {
    int value = 10;

    printf("Before function call: value = %d\n", value);

    // Call the function with the address of value
    modifyValue(&value);

    printf("After function call: value = %d\n", value);

    return 0;
}
