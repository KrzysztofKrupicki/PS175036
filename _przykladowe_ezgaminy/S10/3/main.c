#include <stdio.h>
#include <stdlib.h>

union Extra{
    int x;
    double y;
    char z;
};

int main()
{
    union Extra tabE[6] = {
        {.x = 5},
        {.y = 1238749324832.34},
        {.z = 'c'},
        {.x = 1},
        {.y = 6509278354092.11},
        {.z = 'z'},
    };
    printf("%d\n", tabE[0].x);
    printf("%lf\n", tabE[1].y);
    printf("%c\n", tabE[2].z);
    printf("%d\n", tabE[3].x);
    printf("%lf\n", tabE[4].y);
    printf("%c\n", tabE[5].z);
    return 0;
}
