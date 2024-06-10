#include <stdio.h>
#include <stdlib.h>

void zad2(int *const a, int *b){
    *b = *a**a;
}

int main()
{
    int a = -3;
    int b = 4;
    zad2(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
