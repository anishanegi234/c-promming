#include <stdio.h>

void myFunction(); // Declaration of a function (but not defined)

int main() {
    printf("Calling myFunction...\n");
    myFunction(); // Function is called, but no definition exists
    return 0;
}
