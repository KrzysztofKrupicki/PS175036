#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1 = 0 , f2 = 1;
    printf("%d\n", f1);
    printf("%d\n", f2);
    int f3 = f1 + f2;
    int i = 0;
    while (i < 8){
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        i++;
    }
    return 0;
}
