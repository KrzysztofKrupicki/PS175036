#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char brand[20];
    int mileage;
};

struct Car initCar(char brand[20], int mileage){
    struct Car newCar;
    strcpy(newCar.brand, brand);
    newCar.mileage = mileage;
    return newCar;
}

void showCar(struct Car car){
    printf("Brand: %s\n", car.brand);
    printf("Mileage: %d\n", car.mileage);
}

void mileageService(struct Car *car){
    car->mileage += 10000;
}

int main()
{
    struct Car nowy_samochod = initCar("Toyota", 2300);
    showCar(nowy_samochod);
    mileageService(&nowy_samochod);
    showCar(nowy_samochod);
    return 0;
}
