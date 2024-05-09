#include <stdio.h>
#include <stdlib.h>

void revOddCol(int **tab, unsigned int n, unsigned int m){
    for(int i = 0; i<n/2; i++){
        for(int j = 0; j<m; j++){
            if(j % 2 == 1){
                int temp = *(*(tab+i)+j);
                *(*(tab+i)+j) = *(*(tab+n-1-i)+j);
                *(*(tab+n-1-i)+j) = temp;
            }
        }
    }
}

void printTable(unsigned int n, unsigned int m, int **tab) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            printf("%4d ", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 4, m = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    tab[2] = (int*) malloc(sizeof(int)*m);
    tab[3] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = -3;
    *(*(tab+1)+0) = 1;
    *(*(tab+1)+1) = 4;
    *(*(tab+1)+2) = 7;
    *(*(tab+2)+0) = -3;
    *(*(tab+2)+1) = -6;
    *(*(tab+2)+2) = 11;
    *(*(tab+3)+0) = -2;
    *(*(tab+3)+1) = 8;
    *(*(tab+3)+2) = 23;
    printf("\nPrzed:\n");
    printTable(n, m, tab);
    revOddCol(tab, n, m);
    printf("\nPo:\n");
    printTable(n, m, tab);
    return 0;
}
