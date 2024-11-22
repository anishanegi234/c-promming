#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;
    char line[256];  // Array to hold each line from the file

    // Open the file for reading ("r" mode)
    file = fopen("output.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Unable to open the file for reading.\n");
        return 1;
    }

    // Read and display the contents of the file line by line
    printf("Contents of the file:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
