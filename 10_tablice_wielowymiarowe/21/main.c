#include <stdio.h>
#include <stdlib.h>

int idxDiff(int **tab, unsigned int n){
    int minimum = *(*(tab));
    int minimumIdx = 0;
    int maximum = *(*(tab));
    int maximumIdx = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(*(*(tab+i)+j) > maximum) {
                maximum = *(*(tab+i)+j);
                maximumIdx = i+j;
            }
            if(*(*(tab+i)+j) < minimum) {
                minimum = *(*(tab+i)+j);
                minimumIdx = i+j;
            }
        }
    }
    return minimumIdx-maximumIdx;
}

int main()
{
    int n = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*n);
    tab[1] = (int*) malloc(sizeof(int)*n);
    tab[2] = (int*) malloc(sizeof(int)*n);
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = -3;
    *(*(tab+1)+0) = 1;
    *(*(tab+1)+1) = 4;
    *(*(tab+1)+2) = 7;
    *(*(tab+2)+0) = -3;
    *(*(tab+2)+1) = -6;
    *(*(tab+2)+2) = 11;
    printf("%d", idxDiff(tab, n));
    return 0;
}
