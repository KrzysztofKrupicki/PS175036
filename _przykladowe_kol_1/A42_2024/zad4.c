#include <stdio.h>
#include <stdlib.h>

int sequence(unsigned int n){
    if (n == 0) exit(-1);
    if (n == 1) return -1;
    else if (n % 2 == 0) return 4*sequence(n-1) + 3;
    else return sequence(n-1) + 1;
}

int main()
{
    printf("%d\n", sequence(4));
    return 0;
}
