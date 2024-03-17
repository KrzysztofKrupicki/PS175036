#include <stdio.h>
#include <stdlib.h>

double subPtrs(double const *num1, double *const num2){
    return *num1 - *num2;
}

int main()
{
    int a = 5, b = 3;
    printf("%d\n", subPtrs(&a, &b));
    return 0;
}
