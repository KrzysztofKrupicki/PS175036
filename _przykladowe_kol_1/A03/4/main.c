#include <stdio.h>
#include <stdlib.h>

int polynomial_value(unsigned int n, int x){
    if (n == 0) return 1;
    return (x-1)*polynomial_value(n-1, x) + 1;
}

int main()
{
    printf("%d\n", polynomial_value(1, 3));
    printf("%d\n", polynomial_value(2, 3));
    printf("%d\n", polynomial_value(3, 3));
    return 0;
}
