#include <stdio.h>
#include <stdlib.h>

int calculateSquareRootFloor(unsigned int n){
    int pierwiastek = 0;
    while (pierwiastek * pierwiastek <= n){
        pierwiastek++;
    }
    pierwiastek--;
    return pierwiastek;
}

int main()
{
    printf("%d\n", calculateSquareRootFloor(10));
    printf("%d\n", calculateSquareRootFloor(16));
    printf("%d\n", calculateSquareRootFloor(17));
    return 0;
}
