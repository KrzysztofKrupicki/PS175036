#include <stdio.h>
#include <stdlib.h>

int sumSqares(unsigned int n, int tab[n]){
    int suma = 0;
    for (int i = 0; i<n; i++){
        suma += tab[i]*tab[i];
    }
    return suma;
}

int main()
{
    int numbers[6] = {5, 2, -5, 1, 8, 6};
    int n = 6;
    printf("%d", sumSqares(n, numbers));
    return 0;
}
