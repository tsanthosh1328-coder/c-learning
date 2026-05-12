#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char title[50];
    char author[50];
    int year;
    float price;
    bool isAvailable;
} Book;

void printBook(Book b);

int main() {

    Book book1 = {"The C Programming Language", "Brian W. Kernighan and Dennis M. Ritchie", 1978, 29.99, true};
    Book book2 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99, true};
    Book book3 = {"To Kill a Mockingbird", "Harper Lee", 1960, 7.99, false};
    Book book4 = {0};

    strcpy(book4.title, "Nineteen Eighty-Four");
    strcpy(book4.author, "George Orwell");
    book4.year = 1949;
    book4.price = 9.99;
    book4.isAvailable = true;

    printBook(book1);
    printBook(book2);
    printBook(book3);
    printBook(book4);
}

void printBook(Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Year: %d\n", b.year);
    printf("Price: $%.2f\n", b.price);
    printf("Available: %s\n", b.isAvailable ? "Yes" : "No");
    printf("\n");
}