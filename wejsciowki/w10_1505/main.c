#include <stdio.h>
#include <stdlib.h>

int wariant273(unsigned int n, unsigned int m, int **tab){
    int result = 0;
    for (int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(*(*(tab+i)+j) % 3 == 0) result++;
        }
    }
    return result;
}

int main()
{
    int n = 2, m = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 3;
    *(*(tab+1)+0) = -2;
    *(*(tab+1)+1) = 3;
    *(*(tab+1)+2) = 5;
    printf("%d", wariant273(n, m, tab));
    return 0;
}
