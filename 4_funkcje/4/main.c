#include <stdio.h>
#include <stdlib.h>

int sumNumbers(unsigned int n){
    int suma = 0;
    for (n; n>0; n--){
        suma += n;
    }
    return suma;
}

int main()
{
    printf("%d\n", sumNumbers(3));
    printf("%d\n", sumNumbers(4));
    printf("%d\n", sumNumbers(5));
    return 0;
}
