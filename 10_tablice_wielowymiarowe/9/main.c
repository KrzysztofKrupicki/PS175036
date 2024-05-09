#include <stdio.h>
#include <stdlib.h>

void revRows(unsigned int n, unsigned int m, int tab[n][m]){
    for (int i = 0; i<n/2; i++){
        for (int j = 0; j<m; j++){
            int temp = tab[n-i-1][j];
            tab[n-i-1][j] = tab[i][j];
            tab[i][j] = temp;
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
    int n = 3, m = 3;
    int tab[3][3] = {{1,2,4},{-2,3,5},{5,7,1}};
    printf("\nPrzed:\n");
    printTable(n, m, tab);
    revRows(n, m, tab);
    printf("\nPo:\n");
    printTable(n, m, tab);
    return 0;
}
