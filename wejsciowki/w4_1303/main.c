#include <stdio.h>
#include <stdlib.h>

// Wariant 422
int funkcja(unsigned int a, unsigned int b){
    if (a % 10 > b % 10){
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", funkcja(12, 13));
    printf("%d\n", funkcja(13, 12));
    printf("%d\n", funkcja(25, 15));
    printf("%d\n", funkcja(32, 11));
    return 0;
}
