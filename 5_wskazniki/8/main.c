#include <stdio.h>
#include <stdlib.h>

void sumToPtr(int const *p1, int const *p2, int *p3){
    *p3 = *p1 + *p2;
}

int main()
{
    int a = 5, b = 3, c = 10;
    sumToPtr(&a, &b, &c);
    printf("%d\n", c);
    return 0;
}
