#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Declare two variables to store the first two Fibonacci numbers
    int first = 0, second = 1, next;

    // Print the first two numbers of the Fibonacci series
    printf("Fibonacci Series: \n");

    // Handle the case when the user enters 1 term
    if (n >= 1) {
        printf("%d ", first); // Print first term
    }
    
    if (n >= 2) {
        printf("%d ", second); // Print second term
    }

    // Generate and print the rest of the Fibonacci series
    for (i = 3; i <= n; i++) {
        next = first + second;  // Calculate the next term
        printf("%d ", next);    // Print the next term

        // Update first and second for the next iteration
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
