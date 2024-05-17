#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    char brand[50];
    int mileage;
};

struct Car *initCar(char *brand, int mileage){
    int dlugosc = 0;
    while (brand[dlugosc] != '\0') dlugosc++;
    if (dlugosc < 2 || mileage <= 0) return NULL;
    struct Car *newCar = malloc(sizeof(struct Car));
    strcpy(newCar->brand, brand);
    newCar->mileage = mileage;
    return newCar;
};

void increaseMileage(struct Car *car){
    car->mileage += 1000;
}

int main()
{
    struct Car *nowy_samochod = initCar("V", 12000);
    if (nowy_samochod == NULL) exit(-1);
    increaseMileage(nowy_samochod);
    printf("%d\n", nowy_samochod->mileage);
    return 0;
}
