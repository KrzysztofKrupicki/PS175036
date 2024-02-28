#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    int silnia = 1;
    for (int i=1;i<=n;i++){
        silnia *= i;
    }
    printf("Silnia wynosi: %d", silnia);
    return 0;
}
