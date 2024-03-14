#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y){
    return x + y;
}

int sumVals(int *p1, int *p2){
    return *p1 + *p2;
}

void addPtr(int *p1, int *p2, int *p3){
    *p3 = *p1 + *p2;
}

int main()
{
    int a = 5, b = 15;
    printf("%d\n", sum(a, b));
    printf("%d\n", sumVals(&a, &b));
    int c = 6;
    addPtr(&a, &b, &c);
    printf("%d\n", c);
    return 0;
}
