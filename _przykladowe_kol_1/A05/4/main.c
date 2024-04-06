#include <stdio.h>
#include <stdlib.h>

int zad4(unsigned int n){
    if (n == 0) return 5;
    return  zad4(n-1) * -2;
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
