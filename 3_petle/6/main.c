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
    printf("%d", (int)pow(n, 0.5));
    return 0;
}
