#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Apartment{
    char address[100];
    int number_of_residents;
};

struct Apartment *initApartment(char *address, int number_of_residents){
    int dlugosc = 0;
    while (address[dlugosc] != '\0') dlugosc++;
    if (dlugosc < 5 && number_of_residents <= 0) return NULL;
    struct Apartment *newApartment = malloc(sizeof(struct Apartment));
    strcpy(newApartment->address, address);
    newApartment->number_of_residents = number_of_residents;
    return newApartment;
};

void increaseResidents(struct Apartment *apartment){
    apartment->number_of_residents += 2;
}

int main()
{
    struct Apartment *nowy_apartament = initApartment("Mazurska 12", 4);
    if (nowy_apartament == NULL) exit(-1);
    increaseResidents(nowy_apartament);
    printf("%d\n", nowy_apartament->number_of_residents);
    return 0;
}
