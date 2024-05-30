#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int quantity;
    float price;
};


struct Product highestPrice(struct Product tab[], int size){
    struct Product highest = tab[0];
    for(int i = 0; i<size; i++){
        if(tab[i].price >= highest.price) highest = tab[i];
    }
    return highest;
};

int main()
{
    struct Product tabP[4] = {
        {2, 1199},
        {5, 999},
        {6, 1599},
        {12, 1599}
    };
    struct Product result = highestPrice(tabP, 4);
    printf("%d %lf\n", result.quantity, result.price);
    return 0;
}
