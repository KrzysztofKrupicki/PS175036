#include <stdio.h>
#include <stdlib.h>

void shiftLeft(unsigned int n, float tab[n]){
    float temp = tab[0];
    for (int i = 1; i<n; i++){
        tab[i-1] = tab[i];
    }
    tab[n-1] = temp;
}

void shiftLeftUsingPointers(unsigned int n, float *tab){
    float temp = *tab;
    for (int i = 1; i<n; i++){
        *(tab+i-1) = *(tab+i);
    }
    *(tab+n-1) = temp;
}

int main()
{
    float tab[6] = {5.2, 2.5, 8.7, 4.4, 1.3, 6.9};
    int n = 6;
    printf("Przed:\n");
    for (int i=0; i<n; i++){
        printf("%f ", tab[i]);
    }
    shiftLeft(n, tab);
    printf("\nPo shiftLeft:\n");
    for (int i=0; i<n; i++){
        printf("%f ", tab[i]);
    }

    // Wersja z wskaznikami
    float *tabUsingPointers = malloc(6*sizeof(float));
    *tabUsingPointers = 5.2;
    *(tabUsingPointers+1) = 2.5;
    *(tabUsingPointers+2) = 8.7;
    *(tabUsingPointers+3) = 4.4;
    *(tabUsingPointers+4) = 1.3;
    *(tabUsingPointers+5) = 6.9;
    shiftLeftUsingPointers(n, tabUsingPointers);
    printf("\nPo shiftLeftUsingPointers:\n");
    for (int i=0; i<n; i++){
        printf("%f ", *(tab+i));
    }

    return 0;
}
