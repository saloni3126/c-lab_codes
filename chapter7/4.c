// Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. 

#include <stdio.h>

struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

void printBookDetails(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book myBook;

    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    printf("Enter Title: ");
    scanf(" %[^\n]", myBook.title); // To read string with spaces
    printf("Enter Author: ");
    scanf(" %[^\n]", myBook.author); // To read string with spaces
    printf("Enter Price: ");
    scanf("%f", &myBook.price);

    printf("\nBook Details:\n");
    printBookDetails(myBook);

    return 0;
}
