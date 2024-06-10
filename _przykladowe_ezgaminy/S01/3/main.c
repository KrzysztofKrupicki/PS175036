#include <stdio.h>
#include <stdlib.h>

int zad3(int **tab, int n){
    int minElement = *(*tab);
    int sumaIJ = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(*(*(tab+i)+j) == minElement && i+j < sumaIJ) sumaIJ = i + j;
            if(*(*(tab+i)+j) < minElement){
                minElement = *(*(tab+i)+j);
                sumaIJ = i + j;
            }
        }
    }
    return sumaIJ;
}

int main()
{
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);
    *(*(tab+0)+0) = 7;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 4;
    *(*(tab+1)+0) = -2;
    *(*(tab+1)+1) = 3;
    *(*(tab+1)+2) = -11;
    *(*(tab+2)+0) = -11;
    *(*(tab+2)+1) = -2;
    *(*(tab+2)+2) = 1;
    printf("%d\n", zad3(tab, 3));
    return 0;
}
