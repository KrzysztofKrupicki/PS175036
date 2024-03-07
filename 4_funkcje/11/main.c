#include <stdio.h>
#include <stdlib.h>

int calculateArithmeticSequenceRecursively(unsigned int n, int d){
    if (n == 1) return 1;
    return calculateArithmeticSequenceRecursively(n - 1, d)+d;
}

int main()
{
    printf("%d\n", calculateArithmeticSequenceRecursively(5, -2));
    printf("%d\n", calculateArithmeticSequenceRecursively(7, 4));
    return 0;
}
