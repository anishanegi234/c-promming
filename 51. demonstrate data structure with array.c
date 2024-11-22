#include <stdio.h>

// Define a structure to store student data
struct Student {
    char name[50];
    int rollNumber;
    int marks[5];  // Array to store marks for 5 subjects
};

// Function to display student information
void displayStudent(struct Student s) {
    printf("Student Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", s.marks[i]);
    }
    printf("\n");
}

int main() {
    // Declare and initialize a student structure
    struct Student student1 = {"John Doe", 101, {85, 90, 78, 88, 92}};

    // Display student information
    displayStudent(student1);

    return 0;
}
