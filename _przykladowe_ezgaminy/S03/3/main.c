#include <stdio.h>
#include <stdlib.h>

int productDiagonal(int n, int m, int **tab){
    int wynik = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == j) wynik *= *(*(tab+i)+j);
        }
    }
    return wynik;
}

int main()
{
    int **tab = (int**)malloc(sizeof(int*)*2);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);

    *(*(tab+0)+0) = 3;
    *(*(tab+0)+1) = 4;
    *(*(tab+0)+2) = -8;
    *(*(tab+1)+0) = -3;
    *(*(tab+1)+1) = -7;
    *(*(tab+1)+2) = 5;
    printf("%d\n", productDiagonal(2, 3, tab));
    return 0;
}
