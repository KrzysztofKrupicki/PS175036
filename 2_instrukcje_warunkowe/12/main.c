#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocena;
    printf("Podaj ocene: ");
    scanf("%d", &ocena);
    if (ocena >= 51){
        printf("Zdane");
    } else {
        printf("Niezdane");
    }
    return 0;
}
