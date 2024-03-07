#include <stdio.h>
#include <stdlib.h>

float calculateAbsoluteValue(float n){
    if (n >= 0) return n;
    return -n;
}

int main()
{
    printf("%f\n", calculateAbsoluteValue(-4.5));
    printf("%f\n", calculateAbsoluteValue(-6.5));
    printf("%f\n", calculateAbsoluteValue(-6));
    return 0;
}
