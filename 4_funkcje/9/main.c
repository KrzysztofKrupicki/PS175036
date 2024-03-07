#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(unsigned int n){
    if (n == 0) return 1;
    return n * calculateFactorialRecursively(n-1);
}

int main()
{
    printf("%d\n", calculateFactorialRecursively(3));
    printf("%d\n", calculateFactorialRecursively(4));
    printf("%d\n", calculateFactorialRecursively(5));
    printf("%d\n", calculateFactorialRecursively(6));
    return 0;
}
