#include <stdio.h>
#include <stdlib.h>

int zad4(unsigned int n){
    if (n ==0) return 3;
    if (n%2==1) return -zad4(n-1)-1;
    else return -zad4(n-1)+1;
}

int main()
{
    printf("%d\n", zad4(0));
    printf("%d\n", zad4(1));
    printf("%d\n", zad4(2));
    printf("%d\n", zad4(3));
    printf("%d\n", zad4(4));
    printf("%d\n", zad4(5));
    return 0;
}
