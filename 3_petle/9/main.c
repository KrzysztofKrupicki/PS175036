#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Z tablica
    int n;
    printf("Podaj ilosc elementow: ");
    scanf("%d", &n);
    while (n <= 0){
        printf("Wprowadzono liczbe niedodatnia\n");
        printf("Podaj ilosc elementow: ");
        scanf("%d", &n);
    }
    int ciag[n];
    for (int i = 0; i < n; i++){
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &ciag[i]);
        while (ciag[i] <= 0){
            printf("Wprowadzono liczbe niedodatnia\n");
            printf("Podaj dodatnia liczbe calkowita: ");
            scanf("%d", &ciag[i]);
        }
    }
    int ilosc = 0;
    for (int k = 1; k < n; k++){
        float nierownosc = (float)(ciag[k-1]+ciag[k+1])/2;
        if (ciag[k] < nierownosc){
            ilosc++;
        }
    }
    printf("Ilosc elementow spelniajacych nierownosc: %d", ilosc);
    return 0;
    */
    /* Poprawne rozwiazanie */
    int n, prev, curr, next;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("Podaj elementy ciagu: ");
    scanf("%d", &prev);
    scanf("%d", &curr);
    int licznik = 0;
    for (int i = 3; i<= n; i++){
        scanf("%d", &next);
        if (2*curr - prev < next){
            licznik++;
        }
        prev = curr;
        curr = next;
    }
    printf("Ilosc elementow spelniajacych nierownosc: %d\n", licznik);
}
