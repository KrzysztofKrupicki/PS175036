#include <stdio.h>
#include <stdlib.h>

void revRowArr(unsigned int n, unsigned int m, int **tab){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m/2; j++){
            int temp = *(*(tab+i)+m-j-1);
            *(*(tab+i)+m-j-1) = *(*(tab+i)+j);
            *(*(tab+i)+j) = temp;
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
    int n = 3, m = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    tab[2] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 4;
    *(*(tab+1)+0) = -2;
    *(*(tab+1)+1) = 3;
    *(*(tab+1)+2) = 5;
    *(*(tab+2)+0) = 5;
    *(*(tab+2)+1) = 7;
    *(*(tab+2)+2) = 1;
    printf("\nPrzed:\n");
    printTable(n, m, tab);
    revRowArr(n, m, tab);
    printf("\nPo:\n");
    printTable(n, m, tab);
    return 0;
}
