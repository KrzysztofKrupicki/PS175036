#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    float avg, sum;
    printf("Podaj x: ");
    scanf("%d", &x);
    printf("Podaj y: ");
    scanf("%d", &y);
    printf("Podaj z: ");
    scanf("%d", &z);
    sum = x + y + z;
    avg = sum/3;
    printf("\nAvg: %f", avg);
    return 0;
}
