#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bike{
    char model[40];
    int distance_travelled;
};

struct Bike *initBike(char *model, int distance_travelled){
    int dlugosc = 0;
    while (model[dlugosc] != '\0') dlugosc++;
    if (dlugosc < 2 || distance_travelled <= 0) return NULL;
    struct Bike *newBike = malloc(sizeof(struct Bike));
    strcpy(newBike->model, model);
    newBike->distance_travelled = distance_travelled;
    return newBike;
};

void increaseDistance(struct Bike *bike){
    bike->distance_travelled += 500;
}

int main()
{
    struct Bike *nowy_rower = initBike("Kross", 5000);
    if (nowy_rower == NULL) exit(-1);
    increaseDistance(nowy_rower);
    printf("%d\n", nowy_rower->distance_travelled);
    return 0;
}
