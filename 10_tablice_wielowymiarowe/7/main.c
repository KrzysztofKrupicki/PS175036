#include <stdio.h>
#include <stdlib.h>

void swapElems(unsigned int n, unsigned int m, int tab1[n][m], int tab2[n][m]){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
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
    int tab2[3][3] = {{1,2,4},{-2,3,5},{5,7,1}};
    int tab1[3][3] = {};
    printf("\nPrzed tab1:\n");
    printTable(n, m, tab1);
    printf("\nPrzed tab2:\n");
    printTable(n, m, tab2);
    swapElems(n, m, tab1, tab2);
    printf("\nPo tab1:\n");
    printTable(n, m, tab1);
    printf("\nPo tab2:\n");
    printTable(n, m, tab2);
    return 0;
}
