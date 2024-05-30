#include <stdio.h>
#include <stdlib.h>

int zadanie2(char *napis, char znak){
    int dlugosc = 0;
    int ilosc = 0;
    while(napis[dlugosc] != '\0'){
        if(napis[dlugosc] == znak) ilosc++;
        dlugosc++;
    }
    return ilosc;
}

int main()
{
    printf("%d\n", zadanie2("agrafka", 'a'));
    return 0;
}
