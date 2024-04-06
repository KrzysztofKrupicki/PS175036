#include <stdio.h>
#include <stdlib.h>

int zad5(unsigned int m, int n, int tab[]){
    int counter = 0;
    for (int i=0; i<m; i++){
        if (tab[i]< n) counter++;
    }
    return counter;
}

int zad5UP(unsigned int m, int n, int *tab){
    int counter = 0;
    for (int i=0; i<m; i++){
        if (*(tab+i)< n) counter++;
    }
    return counter;
}

int main()
{
    int tab[] = {3,4,-5,6};
    int m = 4;
    int n = 2;
    printf("%d\n", zad5(m, n, tab));

    int *tabUP = malloc(m*sizeof(int));
    *(tabUP+0) = 6;
    *(tabUP+1) = -2;
    *(tabUP+2) = 18;
    *(tabUP+3) = 4;
    *(tabUP+4) = -8;
    *(tabUP+5) = 12;
    m = 6;
    n = 10;
    printf("%d\n", zad5UP(m, n, tabUP));
    return 0;
}
