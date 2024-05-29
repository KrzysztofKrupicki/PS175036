#include <stdio.h>
#include <stdlib.h>

struct Team{
    char *name;
    int championships;
};

int highestNumberOfChampionships(struct Team tab[], unsigned int size){
    int highest = tab[0].championships;
    for (int i = 0; i<size; i++){
        if (tab[i].championships > highest) highest = tab[i].championships;
    }
    return highest;
}

int main()
{
    struct Team tabT[3] = {
        {"Blue", 3},
        {"Green", 7},
        {"Red", 2}
    };
    printf("%d\n", highestNumberOfChampionships(tabT, 3));
    return 0;
}
