#include <stdio.h>
#include <stdlib.h>

void swapColumns(int **tab, unsigned int n, unsigned int m, int indexA, int indexB){
    if ((indexA >=0) & (indexA < m) & (indexB >= 0) & (indexB < m)){
        for(int i = 0; i<n; i++){
            int temp = *(*(tab+i)+indexA);
            *(*(tab+i)+indexA) = *(*(tab+i)+indexB);
            *(*(tab+i)+indexB) = temp;
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
    int n = 3, m = 4;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    tab[2] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 4;
    *(*(tab+0)+3) = -2;
    *(*(tab+1)+0) = 3;
    *(*(tab+1)+1) = 5;
    *(*(tab+1)+2) = 5;
    *(*(tab+1)+3) = 7;
    *(*(tab+2)+0) = 1;
    *(*(tab+2)+1) = 8;
    *(*(tab+2)+2) = 4;
    *(*(tab+2)+3) = 0;
    printf("\nPrzed:\n");
    printTable(n, m, tab);
    swapColumns(tab, n, m, 0, 2);
    printf("\nPo:\n");
    printTable(n, m, tab);
    return 0;
}
