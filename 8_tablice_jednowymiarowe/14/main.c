#include <stdio.h>
#include <stdlib.h>

int *shiftRight(unsigned int n, int *tab){
    int *new_tab = malloc(n*sizeof(int));
    for (int i=1; i<n; i++){
        *(new_tab+i) = *(tab+i-1);
    }
    *new_tab = *(tab+n-1);
    return new_tab;
}

int main()
{
    int n = 7;
    int *tab = malloc(7*sizeof(int));
    *tab = 5;
    *(tab+1) = 2;
    *(tab+2) = 8;
    *(tab+3) = 4;
    *(tab+4) = 1;
    *(tab+5) = 6;
    *(tab+6) = 7;

    printf("Przed:\n");
    for (int i=0; i<n; i++){
        printf("%d ", *(tab+i));
    }
    int *result = shiftRight(n, tab);
    printf("\nPo shiftRight:\n");
    for (int i=0; i<n; i++){
        printf("%d ", *(result+i));
    }

    return 0;
}
