#include <stdio.h>
#include <stdlib.h>

int sum_odd_indices(unsigned int n, int *tab){
    int suma = 0;
    for (int i =0; i<n; i++){
        if (i % 2 == 1) suma += *(tab+i);
    }
    return suma;
}

int main()
{
    int tab[5] = {5,6,1,8,2};
    printf("%d\n", sum_odd_indices(5, tab));

    int *tabUP = malloc(5*sizeof(int));
    *(tabUP+0) = 5;
    *(tabUP+1) = 6;
    *(tabUP+2) = 1;
    *(tabUP+3) = 8;
    *(tabUP+4) = 2;
    printf("%d\n", sum_odd_indices(5, tabUP));
    return 0;
}
