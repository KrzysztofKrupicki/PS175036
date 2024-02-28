#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolar;
    float euro;
    printf("Podaj dolary: ");
    scanf("%f", &dolar);
    euro = dolar * 0.85;
    printf("%0.2f", euro);
    return 0;
}
