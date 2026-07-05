#include <stdio.h>

struct Book {
    char book_name[50];
    char author[50];
    float price;
};

void main() {
    struct Book B1, *Bptr;
    Bptr = &B1;

    printf("Enter Book Name: ");
    scanf("%s", Bptr->book_name);

    printf("Enter Author Name: ");
    scanf("%s", Bptr->author);

    printf("Enter Price: ");
    scanf("%f", &Bptr->price);

    printf("Book name: %s\n", Bptr->book_name);
    printf("Author: %s\n", Bptr->author);
    printf("Price: %.2f\n", Bptr->price);
}
