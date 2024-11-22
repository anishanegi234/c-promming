#include <stdio.h>

int main() {
    // Declare a register variable
    register int counter;

    // Demonstrate the usage of the register variable in a loop
    printf("Values of counter using register variable:\n");
    for (counter = 1; counter <= 5; counter++) {
        printf("%d ", counter);
    }

    printf("\n");

    return 0;
}
