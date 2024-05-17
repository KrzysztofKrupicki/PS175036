#include <stdio.h>
#include <stdlib.h>

struct Book{
    char *title;
    char *author;
    int pages;
};

int main()
{
    struct Book tabB[5] = {
        {"Wiedzmin", "Andrzej Sapkowski", 320},
        {"Rok 1984", "George Orwell", 380},
        {"Dzuma", "Albert Camus", 294},
        {"Pastrami", "Malcolm XD", 240},
        {"Polowanie na psy", "Mieczyslaw Gorzka", 488},
    };
    return 0;
}
