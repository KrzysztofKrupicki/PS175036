#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocena;
    printf("Podaj ocene: ");
    scanf("%d", &ocena);
    ocena >= 51 ? printf("Zdane") : printf("Niezdane");
    return 0;
}
