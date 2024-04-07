#include <stdio.h>
#include <stdlib.h>

int zad5(unsigned int m, unsigned int n, int tab[]){
    if (n < 2) {
        printf("Blad: n>1");
        return -1;
    }
    int iloczyn = 1;
    for (int i = 0; i<m; i++){
        if (tab[i]%n == 0){
            iloczyn *= tab[i];
        }
    }
    return iloczyn;
}

int zad5UP(unsigned int m, unsigned int n, int *tab){
    if (n < 2) {
        printf("Blad: n>1");
        return -1;
    }
    int iloczyn = 1;
    for (int i = 0; i<m; i++){
        if (*(tab+i)%n == 0){
            iloczyn *= *(tab+i);
        }
    }
    return iloczyn;
}

int main()
{
    int tab[] = {4, 6, 7, 2, 3, 1};
    int m = 6;
    int n = 2;
    printf("%d\n", zad5(m, n, tab));

    int *tabUP = malloc(m*sizeof(int));
    *(tabUP+0) = 4;
    *(tabUP+1) = 6;
    *(tabUP+2) = 7;
    *(tabUP+3) = 2;
    *(tabUP+4) = 3;
    *(tabUP+5) = 1;
    printf("%d\n", zad5UP(m, n, tabUP));
    return 0;
}
