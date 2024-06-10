#include <stdio.h>
#include <stdlib.h>

int zad2(int n, int *tab, int x){
    int wynik = 0;
    for(int i = 0; i<n; i++){
        wynik += *(tab+i)*pow(x, i);
    }
    return wynik;
}

int main()
{
    int *tab = malloc(sizeof(int));
    *(tab+0) = 1;
    *(tab+1) = 3;
    *(tab+2) = -4;
    *(tab+3) = 5;
    printf("%d\n", zad2(4, tab, 2));
    return 0;
}
