#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ciag[10];
    for (int i = 0; i < 10; i++){
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &ciag[i]);
        while (ciag[i] <= 0){
            printf("Wprowadzono liczbe niedodatnia\n");
            printf("Podaj liczbe calkowita: ");
            scanf("%d", &ciag[i]);
        }
    }
    int ilosc = 0;
    for (int k = 1; k < 10; k++){
        float nierownosc = (float)(ciag[k-1]+ciag[k+1])/2;
        if (ciag[k] < nierownosc){
            ilosc++;
        }
    }
    printf("Ilosc elementow spelniajacych nierownosc: %d", ilosc);
    return 0;
}
