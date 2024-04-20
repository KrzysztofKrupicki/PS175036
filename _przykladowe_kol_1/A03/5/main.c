#include <stdio.h>
#include <stdlib.h>

void double_odd_elements(unsigned int n, int *tab){
    for (int i =0; i<n; i++){
        if (*(tab+i)%2 != 0){
            *(tab+i) *= 2;
        }
    }
}

int main()
{
    int tab[] = {4,-2,-7,3,7,-9};
    double_odd_elements(6, tab);
    for (int i =0; i<6; i++){
        printf("%d\n", tab[i]);
    }

    printf("\n");

    int *tabUP = malloc(6*sizeof(int));
    *(tabUP+0) = 4;
    *(tabUP+1) = -2;
    *(tabUP+2) = -7;
    *(tabUP+3) = 3;
    *(tabUP+4) = 7;
    *(tabUP+5) = -9;
    double_odd_elements(6, tabUP);
    for (int i =0; i<6; i++){
        printf("%d\n", *(tab+i));
    }
    return 0;
}
