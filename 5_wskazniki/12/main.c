#include <stdio.h>
#include <stdlib.h>

float linFuncVal(float const *a, float *const b, float *const x){
    return *a * *x + *b;
}

int main()
{
    float a = 5.0, b = 3.0, x = 2.0;
    printf("%f\n", linFuncVal(&a, &b, &x));
    return 0;
}
