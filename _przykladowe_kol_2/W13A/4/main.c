#include <stdio.h>
#include <stdlib.h>

struct Budynek{
    char *adres;
    int numer;
};

int zadanie4(struct Budynek tab[], int size){
    int shortestAddressNumber = tab[0].numer;
    int shortestLength;
    for(int i = 0; i<size; i++){
        int dlugosc = 0;
        while(tab[i].adres[dlugosc] != '\0') dlugosc++;
        if(i == 0) shortestLength = dlugosc;
        if(dlugosc < shortestLength) {
            shortestLength = dlugosc;
            shortestAddressNumber = tab[i].numer;
        }
    }
    return shortestAddressNumber;
};

int main()
{
    struct Budynek tabB[3] = {
        {"AABBCC", 34},
        {"XX", 12},
        {"KLMNO", 28},
    };
    printf("%d\n", zadanie4(tabB, 3));
    return 0;
}
