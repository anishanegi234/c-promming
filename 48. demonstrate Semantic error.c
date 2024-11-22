#include <stdio.h>

int main() {
    int num = 5;

    // Intending to check if the number is even or odd
    if (num = 0) { // Semantic error: '=' used instead of '=='
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
