#include <stdio.h>
#include <stdlib.h>

void flipDiag(int **tab, unsigned int n, unsigned int m){
    if (n == m){
        for (int i = 0; i<n/2; i++){
            for (int j = i; j<n/2; j++){
                int temp = tab[i][j];
                tab[i][j] = tab[n-i-1][m-j-1];
                tab[n-i-1][m-j-1] = temp;
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
    int n = 3, m = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    tab[2] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = -3;
    *(*(tab+1)+0) = 1;
    *(*(tab+1)+1) = 4;
    *(*(tab+1)+2) = 7;
    *(*(tab+2)+0) = -3;
    *(*(tab+2)+1) = -6;
    *(*(tab+2)+2) = 11;
    printf("\nPrzed:\n");
    printTable(n, m, tab);
    flipDiag(tab, n, m);
    printf("\nPo:\n");
    printTable(n, m, tab);
    return 0;
}
