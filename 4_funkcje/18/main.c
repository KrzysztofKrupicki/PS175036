#include <stdio.h>
#include <stdlib.h>

int calculateGCD(n, m){
    while (m){
        int temp = n;
        n = m;
        m = temp % m;
    }
    return n;
}

int main()
{
    printf("%d\n", calculateGCD(24, 100));
    printf("%d\n", calculateGCD(26, 14));
    return 0;
}
