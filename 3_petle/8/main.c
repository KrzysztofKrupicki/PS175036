#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Poprawne rozwiazanie */
    int prev, curr, next;
    printf("Podaj 10 elementow ciagu: ");
    scanf("%d", &prev);
    scanf("%d", &curr);
    int licznik = 0;
    for (int i = 3; i<= 10; i++){
        scanf("%d", &next);
        if (2*curr - prev < next){
            licznik++;
        }
        prev = curr;
        curr = next;
    }
    printf("Ilosc elementow spelniajacych nierownosc: %d\n", licznik);
}
