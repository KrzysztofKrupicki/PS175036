#include <stdio.h>
#include <stdlib.h>

int sumSquares(unsigned int n){
    int suma = 0;
    for (n; n>0; n--){
        suma += n*n;
    }
    return suma;
}

int main()
{
    printf("%d\n", sumSquares(3));
    printf("%d\n", sumSquares(4));
    printf("%d\n", sumSquares(5));
    return 0;
}

