#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Podaj liczbe zmiennoprzecinkowa a: ");
    scanf("%f", &a);
    printf("Podaj liczbe zmiennoprzecinkowa b: ");
    scanf("%f", &b);
    printf("Podaj liczbe zmiennoprzecinkowa c: ");
    scanf("%f", &c);
    float wartosc = (1/a) + (b/(2+c));
    printf("Wwartosc wyrazenia: %f", wartosc);
    return 0;
}
