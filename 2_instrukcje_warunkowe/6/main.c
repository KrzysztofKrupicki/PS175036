#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Podaj liczbe calkowita n1: ");
    scanf("%d", &n1);
    printf("Podaj liczbe calkowita n2: ");
    scanf("%d", &n2);
    int suma = n1 + n2;
    suma % 2 == 0 ? printf("Suma liczb %d i %d jest parzysta", n1, n2) : printf("Suma liczb %d i %d jest nieparzysta", n1, n2);
    /*
    if (suma % 2 == 0){
        printf("Suma liczb %d i %d jest parzysta", n1, n2);
    } else {
        printf("Suma liczb %d i %d jest nieparzysta", n1, n2);
    }
    */
    return 0;
}
