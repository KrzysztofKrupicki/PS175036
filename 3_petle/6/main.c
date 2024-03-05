#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Wprowadzono liczbe niedodatnia\n");
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &n);
    }
    int pierwiastek = 0;
    while (pierwiastek * pierwiastek <= n){
        pierwiastek++;
    }
    pierwiastek--;
    printf("Podloga pierwiastka z n: %d", pierwiastek);
    return 0;
}
