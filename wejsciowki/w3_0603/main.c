#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Wariant 222
    int n;
    printf("Podaj liczbe dodatnia calkowita: ");
    scanf("%d", &n);
    while (n < 0) {
        printf("Podaj liczbe dodatnia calkowita: ");
        scanf("%d", &n);
    }
    for (int i = 1; i < 4*n; i =i+2){
        printf("\n%d", i);
    }
    return 0;
}
