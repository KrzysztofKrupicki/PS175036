#include <stdio.h>
#include <stdlib.h>

struct Book{
    char *title;
    int page_count;
};

struct Book findMaxPageCountBook(struct Book tab[], unsigned int size){
    struct Book maxPageCountBook = tab[0];
    for (int i = 0; i<size; i++){
        if (tab[i].page_count > maxPageCountBook.page_count) {
                maxPageCountBook = tab[i];
        }
    }
    return maxPageCountBook;
};

int main()
{
    struct Book tabB[5] = {
        {"Wiedzmin", 320},
        {"Rok 1984", 380},
        {"Dzuma", 294},
        {"Polowanie na psy", 488},
        {"Pastrami", 240},
    };
    struct Book result = findMaxPageCountBook(tabB, 5);
    printf("%s\n", result.title);
    return 0;
}
