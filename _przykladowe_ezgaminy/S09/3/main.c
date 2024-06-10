#include <stdio.h>
#include <stdlib.h>

void zad3(int **tab, int n, int m){
    if(n<4) return;
    int *temp = *(tab+1);
    *(tab+1) = *(tab+n-2);
    *(tab+n-2) = temp;
}

void printTable(int **tab, int n, int m){
    printf("---\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%4d ", *(*(tab+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int **tab = (int**)malloc(sizeof(int*)*4);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);
    tab[3] = (int*)malloc(sizeof(int)*3);
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
    printTable(tab, 4, 3);
    zad3(tab, 4, 3);
    printTable(tab, 4, 3);
    return 0;
}
