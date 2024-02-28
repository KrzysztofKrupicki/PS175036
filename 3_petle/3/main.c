#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma = 0;
    do{
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &n);
        suma += n;
    } while (n != 0);
    printf("Suma wynosi: %d", suma);
    return 0;
}
