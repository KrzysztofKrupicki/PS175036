#include <stdio.h>
#include <stdlib.h>

void absVal(int *n){
    if (*n < 0){
        *n = *n*(-1);
    }
}

int main()
{
    int a = -5;
    printf("\nPrzed: %d", a);
    absVal(&a);
    printf("\nPo: %d", a);
    return 0;
}
