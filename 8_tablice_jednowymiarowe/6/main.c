#include <stdio.h>
#include <stdlib.h>

void reverseArr(unsigned int n, int tab[n]){
    for (int i = 0; i<n/2; i++){
        int temp = tab[i];
        tab[i] = tab[n-i-1];
        tab[n-i-1] = temp;
    }
}

void reverseArrUsingPionters(unsigned int n, int *tab){
    for (int i = 0; i<n/2; i++){
        int temp = *(tab+i);
        *(tab+i) = *(tab+n-i-1);
        *(tab+n-i-1) = temp;
    }
}

int main()
{
    int numbers[5] = {77, 15, 93, 35, 49};
    int n = 5;
    printf("\nPrzed:\n");
    for (int i=0; i<n; i++){
        printf("%d ", numbers[i]);
    }

    reverseArr(n, numbers);
    printf("\nPo reverseArr:\n");
    for (int i=0; i<n; i++){
        printf("%d ", numbers[i]);
    }


    // Wersja z wskaznikami
    int *numbersUsingPointers = malloc(5*sizeof(int));
    *numbersUsingPointers = 77;
    *(numbersUsingPointers+1) = 15;
    *(numbersUsingPointers+2) = 93;
    *(numbersUsingPointers+3) = 35;
    *(numbersUsingPointers+4) = 49;

    reverseArrUsingPionters(n, numbersUsingPointers);
    printf("\nPo reverseArrUsingPointers:\n");
    for (int i=0; i<n; i++){
        printf("%d ", *(numbersUsingPointers+i));
    }

    return 0;
}
