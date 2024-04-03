#include <stdio.h>
#include <stdlib.h>

void increase_by_index(unsigned int n, int tab[n]){
    for (int i=0; i<n; i++){
        tab[i] += i;
    }
}

int main()
{
    int tab[7] = {-5, 2, -8, 4, 1, -6, 7};
    int n = 7;
    printf("\nPrzed: ");
    for (int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    increase_by_index(n, tab);
    printf("\nPo: ");
    for (int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    return 0;
}
