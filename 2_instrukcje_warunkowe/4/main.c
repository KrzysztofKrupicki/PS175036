#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Podaj liczbe calkowita n1: ");
    scanf("%d", &n1);
    printf("Podaj liczbe calkowita n2: ");
    scanf("%d", &n2);
    printf("Podaj liczbe calkowita n3: ");
    scanf("%d", &n3);
    printf("Liczba najmniejsza: %d", n1<n2 ? (n1<n3 ? n1 : n2) : (n2<n3 ? n2 : n3));
}
