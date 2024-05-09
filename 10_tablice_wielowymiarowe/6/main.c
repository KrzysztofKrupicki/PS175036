#include <stdio.h>
#include <stdlib.h>

void copyArr2D(unsigned int n, unsigned int m, int **tab1, int **tab2){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            *(*(tab1+i)+j) = *(*(tab2+i)+j);
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
    int **tab1 = (int**) malloc(sizeof(int*)*n);
    tab1[0] = (int*) malloc(sizeof(int)*m);
    tab1[1] = (int*) malloc(sizeof(int)*m);
    tab1[2] = (int*) malloc(sizeof(int)*m);
    *(*(tab1+0)+0) = 1;
    *(*(tab1+0)+1) = 2;
    *(*(tab1+0)+2) = 4;
    *(*(tab1+1)+0) = -2;
    *(*(tab1+1)+1) = 3;
    *(*(tab1+1)+2) = 5;
    *(*(tab1+2)+0) = 5;
    *(*(tab1+2)+1) = 7;
    *(*(tab1+2)+2) = 1;
    int **tab2 = (int**) malloc(sizeof(int*)*n);
    tab2[0] = (int*) malloc(sizeof(int)*m);
    tab2[1] = (int*) malloc(sizeof(int)*m);
    tab2[2] = (int*) malloc(sizeof(int)*m);
    *(*(tab2+0)+0) = 0;
    *(*(tab2+0)+1) = 0;
    *(*(tab2+0)+2) = 0;
    *(*(tab2+1)+0) = 0;
    *(*(tab2+1)+1) = 0;
    *(*(tab2+1)+2) = 0;
    *(*(tab2+2)+0) = 0;
    *(*(tab2+2)+1) = 0;
    *(*(tab2+2)+2) = 0;
    printf("Przed:\n");
    printTable(n, m, tab2);
    copyArr2D(n, m, tab2, tab1);
    printf("Po:\n");
    printTable(n, m, tab2);
    return 0;
}
