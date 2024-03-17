#include <stdio.h>
#include <stdlib.h>

double multPtrs(double const *num1, double *const num2){
    return *num1 * *num2;
}

int main()
{
    double a = 5.0, b = 3.5;
    printf("%lf\n", multPtrs(&a, &b));
    return 0;
}
