#include <stdio.h>
#include <stdlib.h>

void transpose(unsigned int n, int tab[n][n]){
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}

void printTable(unsigned int n, unsigned int m, int tab[n][m]) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            printf("%4d ", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;
    int tab[3][3] = {{1,2,4},{-2,3,5},{5,7,1}};
    printf("\nPrzed:\n");
    printTable(n, n, tab);
    transpose(n, tab);
    printf("\nPo:\n");
    printTable(n, n, tab);
    return 0;
}
