#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Podaj x: ");
    scanf("%f", &x);
    //x = fabs(x);
    //printf("Wartosc bezwzgledna: %f", x);
    if(x < 0) {
        x = x * -1;
    }
    printf("Wartosc bezwzgledna: %f", x);
    return 0;
}
