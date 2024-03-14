#include <stdio.h>
#include <stdlib.h>

int *initInts(){
    int *blok = malloc(3*sizeof(int));
    *blok = 5;
    *(blok+1) = -12;
    *(blok+2) = 33;
    return blok+1;
}

int main()
{
    int *wynik = initInts();
    printf("%p\n", wynik);
    printf("%d\n", *wynik);
    printf("\n");
    printf("%d\n", *(wynik-1));
    printf("%d\n", *(wynik));
    printf("%d\n", *(wynik+1));
    return 0;
}
