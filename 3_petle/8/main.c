#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Z tablica */
    int ciag[10];
    for (int i = 0; i < 10; i++){
        printf("a%d: ", i + 1);
        scanf("%d", &ciag[i]);
        while (ciag[i] <= 0){
            printf("Wprowadzono liczbe niedodatnia\n");
            printf("a%d: ", i + 1);
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

    /* bez tablic */
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    printf("\n\nPodaj 10 dodatnich liczb calkowitych:\n");
    printf("a1: ");
    scanf("%d", &a1);
    printf("a2: ");
    scanf("%d", &a2);
    printf("a3: ");
    scanf("%d", &a3);
    printf("a4: ");
    scanf("%d", &a4);
    printf("a5: ");
    scanf("%d", &a5);
    printf("a6: ");
    scanf("%d", &a6);
    printf("a7: ");
    scanf("%d", &a7);
    printf("a8: ");
    scanf("%d", &a8);
    printf("a9: ");
    scanf("%d", &a9);
    printf("a10: ");
    scanf("%d", &a10);

    ilosc = 0;
    if (a2 < (a1 + a3) / 2) ilosc++;
    if (a3 < (a2 + a4) / 2) ilosc++;
    if (a4 < (a3 + a5) / 2) ilosc++;
    if (a5 < (a4 + a6) / 2) ilosc++;
    if (a6 < (a5 + a7) / 2) ilosc++;
    if (a7 < (a6 + a8) / 2) ilosc++;
    if (a8 < (a7 + a9) / 2) ilosc++;
    if (a9 < (a8 + a10) / 2) ilosc++;
    printf("Ilosc elementow spelniajacych nierownosc: %d\n", ilosc);
    return 0;
}
