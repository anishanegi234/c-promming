#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the recursive function and display the result
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}
