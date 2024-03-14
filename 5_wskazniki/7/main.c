#include <stdio.h>
#include <stdlib.h>

float *initFlts(){
    float *blok = malloc(4*sizeof(float));
    *(blok) = 0.5;
    *(blok+1) = 1.5;
    *(blok+2) = 2.5;
    *(blok+3) = 3.5;
    return blok+3;
}

int main()
{
    float *wynik = initFlts();
    printf("%f\n", *(wynik));
    printf("\n");
    printf("%f\n", *(wynik-3));
    printf("%f\n", *(wynik-2));
    printf("%f\n", *(wynik-1));
    printf("%f\n", *(wynik));
    return 0;
}
