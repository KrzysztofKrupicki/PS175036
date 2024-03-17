#include <stdio.h>
#include <stdlib.h>

int sumSqrs(int const *num1, int *const num2){
    return *num1 * *num1 + *num2 * *num2;
}

int main()
{
    int a = 5, b = 3;
    printf("%d\n", sumSqrs(&a, &b));
    return 0;
}
