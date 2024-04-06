#include <stdio.h>
#include <stdlib.h>

int *min_value(int *a, int *b, int *c){
    if (*a <= *b && *a <= *c) return a;
    if (*b <= *a && *b <= *c) return b;
    return c;
}

int main()
{
    int x = 3, y = 5, z = 7;
    printf("%d\n", *min_value(&x,&y,&z));
    printf("%d\n", *min_value(&x,&z,&y));
    printf("%d\n", *min_value(&y,&x,&z));
    printf("%d\n", *min_value(&y,&z,&x));
    printf("%d\n", *min_value(&z,&x,&y));
    printf("%d\n", *min_value(&z,&y,&x));
    printf("%d\n", *min_value(&x,&x,&y));
    printf("%d\n", *min_value(&x,&y,&x));
    printf("%d\n", *min_value(&y,&x,&x));
    printf("%d\n", *min_value(&x,&x,&x));
    return 0;
}
