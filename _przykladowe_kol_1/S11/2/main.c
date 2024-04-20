#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int iloczyn = 1;
    for (int i = n; i<=m; i++){
        if (i % 2 != 0){
            iloczyn *= i;
        }
    }
    printf("%d", iloczyn);
    return 0;
}
