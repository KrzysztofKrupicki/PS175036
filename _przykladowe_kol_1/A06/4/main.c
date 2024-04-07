#include <stdio.h>
#include <stdlib.h>

int zad4(unsigned int n){
    if (n ==0) return 6;
    if (n == 1) return zad4(n-1) *3;
    return zad4(n-1)* -3;
}

int main()
{
    printf("%d\n", zad4(0));
    printf("%d\n", zad4(1));
    printf("%d\n", zad4(2));
    printf("%d\n", zad4(3));
    printf("%d\n", zad4(4));
    return 0;
}
