#include <stdio.h>
#include <stdlib.h>

double multiply_pointed_numbers(double const *num1, double *const num2){
    return *num1**num2;
}

int main()
{
    double x = 5, y=3;
    printf("%lf\n", multiply_pointed_numbers(&x, &y));
    return 0;
}
