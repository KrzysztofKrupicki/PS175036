#include <stdio.h>
#include <stdlib.h>

struct Airplane {
    char *model;
    int number_of_engines;
};

int lowestNumberOfEngines(struct Airplane tab[], unsigned int size){
    int lowest = tab[0].number_of_engines;
    for (int i = 0; i<size; i++){
        if (tab[i].number_of_engines < lowest) lowest = tab[i].number_of_engines;
    }
    return lowest;
}

int main()
{
    struct Airplane tabS[3] = {
        {"Airbus 737", 4},
        {"Airbus 787", 5},
        {"Airbus A38", 2},
    };
    printf("%d\n", lowestNumberOfEngines(tabS, 3));
    return 0;
}
