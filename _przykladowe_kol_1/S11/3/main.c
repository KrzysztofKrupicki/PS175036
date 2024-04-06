#include <stdio.h>
#include <stdlib.h>

double find_max_pointed_numbers(double const *num1, double *const num2){
    if (*num1 > *num2) {
        return *num1;
    }
    if (*num1 < *num2) {
        return *num2;
    }
    return *num1;
}

int main()
{
    double a = 4.2;
    double b = -3.4;
    printf("%lf\n", find_max_pointed_numbers(&a, &b));
    return 0;
}
