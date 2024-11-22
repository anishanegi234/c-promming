#include <stdio.h>

void demoAuto() {
    // Declare an auto variable
    auto int num = 5;  // 'auto' is optional here, as all local variables are auto by default

    // Display the value of the auto variable
    printf("Value of num inside demoAuto: %d\n", num);
}

int main() {
    // Call the function that demonstrates the use of an auto variable
    demoAuto();

    // Trying to access 'num' outside demoAuto will result in an error
    // printf("Value of num outside demoAuto: %d\n", num); // This will cause an error because 'num' is out of scope

    return 0;
}
