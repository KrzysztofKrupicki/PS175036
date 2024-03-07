#include <stdio.h>
#include <stdlib.h>

int calculateGeometricSequenceRecursively(unsigned int n, int d){
    if (n == 1) return 1;
    return calculateGeometricSequenceRecursively(n - 1, d)*d;
}

int main()
{
    printf("%d\n", calculateGeometricSequenceRecursively(5, 4));
    printf("%d\n", calculateGeometricSequenceRecursively(7, -3));
    return 0;
}
