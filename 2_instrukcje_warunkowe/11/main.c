#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Podaj liczbe zmiennoprzecinkowa n1: ");
    scanf("%f", &n1);
    printf("Podaj liczbe zmiennoprzecinkowa n2: ");
    scanf("%f", &n2);
    n1 > n2 ? printf("%f", n1) : printf("%f", n2);
    return 0;
}
