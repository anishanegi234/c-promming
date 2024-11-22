#include <stdio.h>

// Define a structure to store book information
struct Book {
    char title[100];
    char author[100];
    int year;
    float price;
};

// Function to display book information
void displayBookInfo(struct Book b) {
    printf("Book Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Year of Publication: %d\n", b.year);
    printf("Price: %.2f\n", b.price);
}

int main() {
    // Declare a structure variable for Book
    struct Book book1;

    // Input the details of the book
    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin); // Read title
    printf("Enter author name: ");
    fgets(book1.author, sizeof(book1.author), stdin); // Read author
    printf("Enter year of publication: ");
    scanf("%d", &book1.year); // Read year
    printf("Enter price of the book: ");
    scanf("%f", &book1.price); // Read price

    // Display the book information
    printf("\nBook Information:\n");
    displayBookInfo(book1);

    return 0;
}
