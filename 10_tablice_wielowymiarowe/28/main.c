#include <stdio.h>
#include <stdlib.h>

void showCols(unsigned int n, unsigned int m, int **tab){
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            printf("%d", *(*(tab+j)+i));
            if(j < n-1) printf(",");
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
    showCols(n, m, tab);
    return 0;
}
