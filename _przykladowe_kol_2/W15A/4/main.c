#include <stdio.h>
#include <stdlib.h>

struct House{
    char *address;
    int floors;
};

int highestFloors(struct House tab[], int size){
    int highest = tab[0].floors;
    for(int i = 1; i<size; i++){
        if(tab[i].floors > highest) highest = tab[i].floors;
    }
    return highest;
}

int main()
{
    struct House tabH[3] = {
        {"Wiosenna 7", 4},
        {"Letnia 8", 7},
        {"Zimowa", 3}
    };
    printf("%d\n", highestFloors(tabH, 3));
    return 0;
}
