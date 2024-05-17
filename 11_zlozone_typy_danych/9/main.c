#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Laptop{
    char model[30];
    float price;
};

struct Laptop initLaptop(char model[30], float price){
    struct Laptop newLaptop;
    strcpy(newLaptop.model, model);
    newLaptop.price = price;
    return newLaptop;
};

void showLaptop(struct Laptop laptop){
    printf("Model: %s\n", laptop.model);
    printf("Price: %.2lf\n", laptop.price);
};

void reducePrice(struct Laptop *laptop){
    laptop->price *= 0.95;
}

int main()
{
    struct Laptop nowy_laptop = initLaptop("Asus Vivobook 14", 4499.99);
    showLaptop(nowy_laptop);
    reducePrice(&nowy_laptop);
    showLaptop(nowy_laptop);
    return 0;
}
