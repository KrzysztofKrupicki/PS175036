#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Podaj dlugosc a: ");
    scanf("%f", &a);
    float b;
    printf("Podaj dlugosc b: ");
    scanf("%f", &b);
    float c = pow((pow(a, 2) + pow(b, 2)), 0.5);
    printf("Dlugosc c: %f", c);
    return 0;
}
