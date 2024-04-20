#include <stdio.h>
#include <stdlib.h>

int count_elements_below_average(unsigned int n, int *tab){
    double suma = 0;
    int counter =0;
    for (int i=0; i<n; i++){
        suma+= *(tab+i);
    }
    double avg = suma/n;
    for (int i=0; i<n; i++){
        if (*(tab+i) < avg) counter++;
    }
    return counter;
}

int main()
{
    int tab[] = {3,7,1,8};
    int n = 4;
    printf("%d\n", count_elements_below_average(n, tab));

    int *tabUP = malloc(n*sizeof(int));
    *(tabUP+0) = 3;
    *(tabUP+1) = 7;
    *(tabUP+2) = 1;
    *(tabUP+3) = 8;
    printf("%d\n", count_elements_below_average(n, tabUP));
    return 0;
}
