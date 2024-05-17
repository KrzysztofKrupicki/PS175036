#include <stdio.h>
#include <stdlib.h>

struct Computer {
    char *brand;
    int number_of_cores;
};

int highestNumberOfCores(struct Computer tab[], unsigned int size){
    int highest = tab[0].number_of_cores;
    for (int i = 0; i<size; i++){
        if (tab[i].number_of_cores > highest) highest = tab[i].number_of_cores;
    }
    return highest;
}

int main()
{
    struct Computer tabC[3] = {
        {"Macbook Air M1", 4},
        {"Macbook Air M2 Pro", 16},
        {"Macbook Air M2", 8},
    };
    printf("%d\n", highestNumberOfCores(tabC, 3));
    return 0;
}
