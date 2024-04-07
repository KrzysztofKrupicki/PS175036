#include <stdio.h>
#include <stdlib.h>

void absolute_value(int *n){
    if (*n<0) *n = *n * -1;
}

int main()
{
    int x = -5;
    printf("%d\n", x);
    absolute_value(&x);
    printf("%d\n", x);
    return 0;
}
