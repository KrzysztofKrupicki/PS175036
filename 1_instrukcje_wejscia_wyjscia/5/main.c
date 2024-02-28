#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x, y;
    printf("Podaj 2 litery: ");
    scanf("%c", &x);
    scanf("%c", &y);
    printf("%c%c", y, x);
    return 0;
}
