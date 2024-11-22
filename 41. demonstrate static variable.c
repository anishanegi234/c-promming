#include <stdio.h>

// Declare the extern variable (defined in another file)
extern int shared_var;

void displayExtern();

int main() {
    printf("Initial value of shared_var in main: %d\n", shared_var);

    // Modify the extern variable in the main function
    shared_var = 20;
    printf("Modified value of shared_var in main: %d\n", shared_var);

    // Call a function that uses the extern variable
    displayExtern();

    return 0;
}
