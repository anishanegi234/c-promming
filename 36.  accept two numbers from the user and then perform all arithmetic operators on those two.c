#include <stdio.h>

int main() {
    // Declare two variables to store the numbers
    float num1, num2;

    // Accept two numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform and display all arithmetic operations
    printf("\nArithmetic Operations on %.2f and %.2f:\n", num1, num2);

    // Addition
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    // Subtraction
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    // Multiplication
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // Division
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Cannot divide by zero!\n");
    }

    // Modulus (only for integer inputs)
    int intNum1 = (int)num1;
    int intNum2 = (int)num2;
    if (intNum2 != 0) {
        printf("Modulus: %d %% %d = %d\n", intNum1, intNum2, intNum1 % intNum2);
    } else {
        printf("Modulus: Cannot divide by zero!\n");
    }

    return 0;
}
