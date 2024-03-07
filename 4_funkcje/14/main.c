#include <stdio.h>
#include <stdlib.h>

int calculate14(unsigned int n){
    if (n == 1) return 2;
    return 3*calculate14(n-1) - 1;
}

int main()
{
    printf("%d\n", calculate14(2));
    printf("%d\n", calculate14(3));
    printf("%d\n", calculate14(4));
    return 0;
}
