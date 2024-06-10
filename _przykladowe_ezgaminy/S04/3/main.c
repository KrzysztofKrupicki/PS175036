#include <stdio.h>
#include <stdlib.h>

struct Ksiazka{
    char *tytul;
    int isbn;
};

int zad3(struct Ksiazka tabK[], int size){
    int najkrotsza_dlugosc_i = 0;
    int najkrotsza_dlugosc = 0;
    for(int i=0; i<size; i++){
        int dlugosc = 0;
        while(tabK[i].tytul[dlugosc] != '\0') dlugosc++;
        if(i == 0){
            najkrotsza_dlugosc = dlugosc;
            najkrotsza_dlugosc_i = i;
        }
        if(dlugosc < najkrotsza_dlugosc){
            najkrotsza_dlugosc = dlugosc;
            najkrotsza_dlugosc_i = i;
        }
    }
    return tabK[najkrotsza_dlugosc_i].isbn;
}

int main()
{
    struct Ksiazka tabK[4] = {
        {"Dzuma", 384791213},
        {"Pan Tadeusz", 12492},
        {"1984", 984387},
        {"Polowanie na psy", 923742}
    };
    printf("%d\n", zad3(tabK, 4));
    return 0;
}
