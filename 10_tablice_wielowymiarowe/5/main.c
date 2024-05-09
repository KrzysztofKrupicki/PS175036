#include <stdio.h>
#include <stdlib.h>

void copyMat(unsigned int n, unsigned int m, int tab1[n][m], int tab2[n][m]){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            tab1[i][j] = tab2[i][j];
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
    printf("Przed:\n");
    printTable(n, m, tab1);
    copyMat(n, m, tab1, tab2);
    printf("Po:\n");
    printTable(n, m, tab1);
    return 0;
}
