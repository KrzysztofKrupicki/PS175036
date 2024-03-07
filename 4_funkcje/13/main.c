#include <stdio.h>
#include <stdlib.h>

int calculate13(unsigned int n){
    if (n == 1) return 1;
    return 2*calculate13(n-1) + 3;
}

int main()
{
    printf("%d\n", calculate13(2));
    printf("%d\n", calculate13(3));
    printf("%d\n", calculate13(4));
    return 0;
}
