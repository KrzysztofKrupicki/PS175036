#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int iloczyn = 1;
    for (n; n<=m; n++){
        if (n % 2 == 1){
            iloczyn *= n;
        }
    }
    printf("%d", iloczyn);
    return 0;
}
