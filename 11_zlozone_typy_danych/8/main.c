#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
    char title[50];
    int page_count;
};

struct Book initBook(char title[50], int page_count){
    struct Book newBook;
    strcpy(newBook.title, title);
    newBook.page_count = page_count;
    return newBook;
};

void showBook(struct Book book){
    printf("Title: %s\n", book.title);
    printf("Page count: %d\n", book.page_count);
};

void addPages(struct Book *book){
    book->page_count += 10;
}

int main()
{
    struct Book nowa_ksiazka = initBook("Polowanie na psy", 488);
    showBook(nowa_ksiazka);
    addPages(&nowa_ksiazka);
    showBook(nowa_ksiazka);
    return 0;
}
