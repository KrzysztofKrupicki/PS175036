#include <stdio.h>
#include <stdlib.h>

double findMax(double const *num1, double * const num2){
    if (*num1 > *num2) return *num1;
    return *num2;
}

int main()
{
    double x = 7.2, y = 5.7, z = 2.4;
    printf("%lf\n", findMax(&x, &y));
    printf("%lf\n", findMax(&z, &y));
    return 0;
}
