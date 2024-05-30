#include <stdio.h>
#include <stdlib.h>

int zadanie2(char *napis1, char *napis2){
    int dlugosc1 = 0;
    int ilosc1 = 0;
    int dlugosc2 = 0;
    int ilosc2 = 0;
    while(napis1[dlugosc1] != '\0'){
        if (napis1[dlugosc1] >= '0' && napis1[dlugosc1] <= '9') ilosc1++;
        dlugosc1++;
    }
    while(napis2[dlugosc2] != '\0'){
        if (napis2[dlugosc2] >= '0' && napis2[dlugosc2] <= '9') ilosc2++;
        dlugosc2++;
    }
    if(dlugosc1 == dlugosc2) return ilosc1;
    if(dlugosc1 < dlugosc2) return ilosc1;
    return ilosc2;
}

int main()
{
    printf("%d\n", zadanie2("abc2", "xyz345"));
    return 0;
}
