#include <stdio.h>
#include <stdlib.h>

int count_positive_elements(unsigned int n, int *tab){
    int counter = 0;
    for (int i=0; i<n; i++){
        if (*(tab+i)>0){
            counter++;
        }
    }
    return counter;
}

int main()
{
    int tab[] = {3,-4,5};
    int n = 3;
    printf("%d\n", count_positive_elements(n, tab));

    int *tabUP = malloc(n*sizeof(int));
    *tabUP = 3;
    *(tabUP+1) = -4;
    *(tabUP+2) = 5;
    printf("%d\n", count_positive_elements(n, tabUP));
    return 0;
}
