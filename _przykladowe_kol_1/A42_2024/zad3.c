#include <stdio.h>
#include <stdlib.h>

void sqValue(int *num){
    *num = *num * *num;
}

int main()
{
    int x = -9;
    printf("Przed: %d\n", x);
    sqValue(&x);
    printf("Po: %d\n", x);
    return 0;
}
