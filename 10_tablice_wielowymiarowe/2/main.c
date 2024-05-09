#include <stdio.h>
#include <stdlib.h>

int sumArray(unsigned int n, unsigned int m, int **tab){
    int res_suma = 0;
    for (int i = 0; i<n; i++){
        int suma = 0;
        for (int j = 0; j<m; j++){
            suma += *(*(tab+i)+j);
        }
        res_suma += suma;
    }
    return res_suma;
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
    printf("%d\n", sumArray(n, m, tab));
    return 0;
}
