#include <stdio.h>
#include <stdlib.h>

void shiftRight2(unsigned int n, int tab[n]){
    int temp1 = tab[n-1];
    int temp2 = tab[n-2];
    for (int i = n; i>=2; i--){
        tab[i] = tab[i-2];
    }
    tab[0] = temp2;
    tab[1] = temp1;
}

void shiftRight2UsingPointers(unsigned int n, int *tab){
    int temp1 = *(tab+n-1);
    int temp2 = *(tab+n-2);
    for (int i = n; i>=2; i--){
        *(tab+i) = *(tab+i-2);
    }
    *tab = temp2;
    *(tab+1) = temp1;
}

int main()
{
    int tab[7] = {5, 2, 8, 4, 1, 6, 7};
    int n = 7;
    printf("Przed:\n");
    for (int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    shiftRight2(n, tab);
    printf("\nPo shiftRight2:\n");
    for (int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }

    // Wersja z wskaznikami
    int *tabUsingPointers = malloc(7*sizeof(float));
    *tabUsingPointers = 5;
    *(tabUsingPointers+1) = 2;
    *(tabUsingPointers+2) = 8;
    *(tabUsingPointers+3) = 4;
    *(tabUsingPointers+4) = 1;
    *(tabUsingPointers+5) = 6;
    *(tabUsingPointers+6) = 7;
    shiftRight2UsingPointers(n, tabUsingPointers);
    printf("\nPo shiftRight2UsingPointers:\n");
    for (int i=0; i<n; i++){
        printf("%d ", *(tab+i));
    }

    return 0;
}
