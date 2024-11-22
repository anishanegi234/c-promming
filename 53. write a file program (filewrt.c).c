#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open a file for writing ("w" mode)
    file = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "This is a file writing demonstration.\n");
    fprintf(file, "C programming allows us to interact with files.\n");
    fprintf(file, "This is line 3 of the text file.\n");

    // Close the file after writing
    fclose(file);

    // Notify the user that the data has been written
    printf("Data successfully written to output.txt\n");

    return 0;
}
