#include <stdio.h>
#include <stdlib.h>

void sqrCopy(int const *p1, int *p2){
    *p2 = *p1 * *p1;
}

int main()
{
    int a = 5, b = 3;
    sqrCopy(&a, &b);
    printf("%d\n", b);
    return 0;
}
