#include <stdio.h>

int main() {
    // Declare a variable
    int num = 10;
    
    // Declare a pointer to an integer
    int *ptr;
    
    // Assign the address of the variable 'num' to the pointer 'ptr'
    ptr = &num;
    
    // Display the value of the variable 'num' using the pointer
    printf("Value of num: %d\n", num);  // Directly accessing num
    
    // Display the value of the variable 'num' using the pointer
    printf("Value of num using pointer: %d\n", *ptr);  // Dereferencing the pointer
    
    // Display the address of the variable 'num'
    printf("Address of num: %p\n", &num);
    
    // Display the address stored in the pointer 'ptr' (which is the address of num)
    printf("Address stored in pointer ptr: %p\n", ptr);
    
    return 0;
}
