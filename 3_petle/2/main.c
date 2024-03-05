#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    int i = 1;
    int suma = 0;
    while(i<=n){
        suma += i;
        i++;
    }
    printf("Suma: %d", suma);
    return 0;
}
