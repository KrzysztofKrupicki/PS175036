#include <stdio.h>
#include <stdlib.h>

void double_odd_elements(unsigned int n, int tab[n]){
    for (int i=1; i<n; i+=2){
        tab[i] = tab[i]*2;
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
    double_odd_elements(n, tab);
    printf("\nPo: ");
    for (int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    return 0;
}
