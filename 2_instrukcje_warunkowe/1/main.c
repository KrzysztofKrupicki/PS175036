#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    if (n > 0){
        printf("Liczba dodatnia");
    }
    if (n < 0){
        printf("Liczba ujemna");
    }
    if (n == 0){
        printf("Liczba zero");
    }
    return 0;
}
