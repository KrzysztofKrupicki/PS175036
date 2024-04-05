#include <stdio.h>
#include <stdlib.h>

void function22(unsigned int n, double tab[]){
    if (n > 3) {
        int temp1 = tab[0];
        int temp2 = tab[1];
        for (int i = 2; i<n-1; i++){
        tab[i-2] = tab[i];
        }
        tab[n-1] = temp2;
        tab[n-2] = temp1;
    } else {
        printf("Blad: n > 3");
    }
}

int main()
{
    int n = 7;
    double tab[7] = {5, 2, 8, 4, 1, 6, 7};
    printf("\nPrzed: ");
    for (int i=0; i<n; i++){
        printf("%lf ", tab[i]);
    }
    function22(n, tab);
    printf("\nPo   : ");
    for (int i=0; i<n; i++){
        printf("%lf ", tab[i]);
    }
    return 0;
}
