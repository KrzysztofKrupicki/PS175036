#include <stdio.h>
#include <stdlib.h>

// Wariant 372
struct Laptop{
    char *manufacturer;
    char serialNumber[50];
    int releaseYear;
    int isOperational;
};

int main()
{
    struct Laptop lap1 = {"HP", "SN348194826AS72", 2016, 0};
    struct Laptop lap2 = {"Lenovo", "SN581629HWX823", 2020, 1};
    struct Laptop lap3 = {"Asus", "SN4103781M1C816", 2004, 0};
    printf("Manufacturer: %s\nSerial number: %s\nRelease year: %d\n\n", lap1.manufacturer, lap1.serialNumber, lap1.releaseYear);
    printf("Manufacturer: %s\nSerial number: %s\nRelease year: %d\n\n", lap2.manufacturer, lap2.serialNumber, lap2.releaseYear);
    printf("Manufacturer: %s\nSerial number: %s\nRelease year: %d\n\n", lap3.manufacturer, lap3.serialNumber, lap3.releaseYear);
    return 0;
}
