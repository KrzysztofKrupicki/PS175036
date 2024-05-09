#include <stdio.h>
#include <stdlib.h>

void sortRows(unsigned int n, unsigned int m, int **tab){
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m-1; j++) {
            for(int k = 0; k < m-j-1; k++){
                if(*(*(tab+i)+k) > *(*(tab+i)+k+1)) {
                    int temp = *(*(tab+i)+k);
                    *(*(tab+i)+k) = *(*(tab+i)+k+1);
                    *(*(tab+i)+k+1) = temp;
                }
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
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 3;
    *(*(tab+1)+0) = 0;
    *(*(tab+1)+1) = -5;
    *(*(tab+1)+2) = 8;
    *(*(tab+2)+0) = 9;
    *(*(tab+2)+1) = 8;
    *(*(tab+2)+2) = -2;
    *(*(tab+3)+0) = -3;
    *(*(tab+3)+1) = 5;
    *(*(tab+3)+2) = 4;
    printf("\nPrzed:\n");
    printTable(n, m, tab);
    sortRows(n, m, tab);
    printf("\nPo:\n");
    printTable(n, m, tab);
    return 0;
}
