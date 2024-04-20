#include <stdio.h>
#include <stdlib.h>

void increase_by_index(unsigned int n, int *tab){
    for (int i=0; i<n; i++){
        *(tab+i) += i;
    }
}

int main()
{
    int tab[] = {3, -4, 5, -2};
    int n = 4;
    increase_by_index(n, tab);
    for (int i=0; i<n; i++){
        printf("%d\n", tab[i]);
    }

    int *tabUP = malloc(n*sizeof(int));
    *(tabUP+0) = 3;
    *(tabUP+1) = -4;
    *(tabUP+2) = 5;
    *(tabUP+3) = -2;
    increase_by_index(n, tabUP);
    for (int i=0; i<n; i++){
        printf("%d\n", *(tabUP+i));
    }
    return 0;
}
