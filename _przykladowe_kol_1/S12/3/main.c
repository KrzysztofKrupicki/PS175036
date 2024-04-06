#include <stdio.h>
#include <stdlib.h>

float linear_function_value(float const *a, float *const b, float const *x){
    return *a**x +*b;
}

int main()
{
    float a = 2.5;
    float b = 6;
    float x = 4;
    printf("%f\n", linear_function_value(&a, &b, &x));
    return 0;
}
