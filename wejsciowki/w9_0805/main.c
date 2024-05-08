#include <stdio.h>
#include <stdlib.h>

void wariant185(char napis[]){
    int odczyt = 0;
    int zapis = 0;
    while (napis[odczyt] != '\0'){
        if (napis[odczyt] == '!'){
            odczyt++;
            continue;
        }
        napis[zapis] = napis[odczyt];
        odczyt++;
        zapis++;
    }
    napis[zapis] = '\0';
}

int main()
{
    char tekst[] = "Hello !World";
    wariant185(tekst);
    printf("%s", tekst);
    return 0;
}
