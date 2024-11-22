#include <stdio.h>

// Function declaration (prototype)
void greet();  // Function to print a greeting message
int add(int a, int b);  // Function to return the sum of two numbers

int main() {
    // Function call to greet
    greet();

    // Function call to add two numbers and display the result
    int result = add(10, 20);
    printf("The sum of 10 and 20 is: %d\n", result);

    return 0;
}

// Function definition for greet
void greet() {
    printf("Hello, welcome to function demonstration in C!\n");
}

// Function definition for add
int add(int a, int b) {
    return a + b;
}
