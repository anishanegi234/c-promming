#include <stdio.h>

int main() {
    int num = 10, denom = 0;
    int result;

    // Attempting division by zero
    printf("Numerator: %d\n", num);
    printf("Denominator: %d\n", denom);

    result = num / denom; // This will cause a run-time error

    printf("Result of division: %d\n", result);

    return 0;
}
