#include <stdio.h>
#include <stdlib.h>

int *newArrOneD(unsigned int n, unsigned int m, int **tab){
    int *result = (int*) malloc(sizeof(int*)*n*m);
    int writeIdx = 0;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            *(result+writeIdx) = *(*(tab+j)+i);
            writeIdx++;
        }
    }
    return result;
}

int main()
{
    int n = 3, m = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    tab[2] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 4;
    *(*(tab+1)+0) = -2;
    *(*(tab+1)+1) = 3;
    *(*(tab+1)+2) = 5;
    *(*(tab+2)+0) = 5;
    *(*(tab+2)+1) = 7;
    *(*(tab+2)+2) = 1;
    int *result = newArrOneD(n, m, tab);
    for (int i = 0; i<n*m; i++){
        printf("%d ", *(result+i));
    }
    return 0;
}
