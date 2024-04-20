#include <stdio.h>
#include <stdlib.h>

int sumEvenIndex(unsigned int n, int *tab){
    if (n == 0) exit(-1);
    int result = 0;
    for (int i =0; i<n; i++){
        if (i%2==0) result += *(tab+i);
    }
    return result;
}

int main()
{
    int n = 6;
    int *tab = malloc(n*sizeof(int));
    *tab = -6;
    *(tab+1) = 3;
    *(tab+2) = 1;
    *(tab+3) = -5;
    *(tab+4) = 2;
    *(tab+5) = 7;
    printf("%d\n", sumEvenIndex(n, tab));
    return 0;
}
