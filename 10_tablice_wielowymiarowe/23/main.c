#include <stdio.h>
#include <stdlib.h>

int **transArr(unsigned int n, int **tab){
    int **result = (int**) malloc(sizeof(int*)*n);
    result[0] = (int*) malloc(sizeof(int)*n);
    result[1] = (int*) malloc(sizeof(int)*n);
    result[2] = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            *(*(result+i)+j) = *(*(tab+j)+i);
        }
    }
    return result;
}

int main()
{
    int n = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*n);
    tab[1] = (int*) malloc(sizeof(int)*n);
    tab[2] = (int*) malloc(sizeof(int)*n);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 4;
    *(*(tab+1)+0) = -2;
    *(*(tab+1)+1) = 3;
    *(*(tab+1)+2) = 5;
    *(*(tab+2)+0) = 5;
    *(*(tab+2)+1) = 7;
    *(*(tab+2)+2) = 1;
    int **result = transArr(n, tab);
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("%d ", *(*(result+i)+j));
        }
        printf("\n");
    }
    return 0;
}
