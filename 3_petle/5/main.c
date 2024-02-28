#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1 = 0 , f2 = 1;
    int i=0;
    printf("%d\n", f1);
    while (i<9){
        printf("%d\n", f2);
        f2 = f1 + f2;
        f1 = f2;
        i++;
    }
    return 0;
}
