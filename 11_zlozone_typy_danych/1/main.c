#include <stdio.h>
#include <stdlib.h>

struct Car {
    char *brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car car1 = {"Toyota", "Supra", 2024, 1};
    struct Car car2 = {.brand="Volkswagen", .model="Golf IV", .year=2002, .isAvailable=0};
    printf("%s %s %d %d", car1.brand, car1.model, car1.year, car1.isAvailable);
    return 0;
}
