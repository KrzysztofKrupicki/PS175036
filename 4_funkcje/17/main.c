#include <stdio.h>
#include <stdlib.h>

int calculate17(unsigned int n){
    if (n == 0 || n == 1) return 1;
    if (n > 1) return calculate17(n-1) * 2;
}

int main()
{
    printf("%d\n", calculate17(2));
    printf("%d\n", calculate17(3));
    printf("%d\n", calculate17(6));
    printf("%d\n", calculate17(10));
    return 0;
}
