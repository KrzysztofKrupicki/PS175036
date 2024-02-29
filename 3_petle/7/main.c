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
    float pierwiastek = pow(n, 0.5);
    int wynik;
    if (pierwiastek-(int)pierwiastek != 0){
        wynik = (int)pierwiastek + 1;
    } else {
        wynik = (int)pierwiastek;
    }
    printf("%d", wynik);
    return 0;
}
