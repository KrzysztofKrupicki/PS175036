#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Liczba %d jest parzysta", n) : printf("Liczba %d jest nieparzysta", n);
    return 0;
}
