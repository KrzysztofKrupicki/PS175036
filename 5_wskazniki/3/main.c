#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int* w){
    *w = x;
}

int main()
{
    int x = 4, y = 7;
    copyInt(x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
