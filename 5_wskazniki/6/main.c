#include <stdio.h>
#include <stdlib.h>

float *initFloats(){
    float *blok = malloc(3*sizeof(float));
    *(blok) = 4.5;
    *(blok+1) = 2.3;
    *(blok+2) = -4.2;
    return blok;
}

int main()
{
    float *wynik = initFloats();
    printf("%f\n", *(wynik));
    printf("\n");
    printf("%f\n", *(wynik));
    printf("%f\n", *(wynik+1));
    printf("%f\n", *(wynik+2));
    return 0;
}
