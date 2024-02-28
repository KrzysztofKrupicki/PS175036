#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Podaj x: ");
    scanf("%d", &x);
    x = abs(x);
    printf("Wartosc ebzwzgledna: %d", x);
    return 0;
}
