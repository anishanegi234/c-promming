#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;

    printf("Demonstrating the use of arrays in C:\n\n");

    // Display elements of the array
    printf("Array elements:\n");
    for (i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Calculate the sum of the array elements
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("\nSum of array elements = %d\n", sum);

    // Modify an element in the array
    numbers[2] = 100; // Change the third element to 100
    printf("\nModified array elements:\n");
    for (i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
