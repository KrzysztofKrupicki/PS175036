#include <stdio.h>
#include <stdlib.h>

void zad2(char *napis1, char *napis2){
    int dlugosc = 0;
    int zapis = 0;
    while(napis1[dlugosc] != '\0'){
        if(dlugosc % 2 == 0) napis2[zapis++] = napis1[dlugosc];
        dlugosc++;
    }
    napis2[zapis] = '\0';
}

int main()
{
    char *tekst1 = "abcdef";
    char tekst2[20];
    zad2(tekst1, tekst2);
    printf("%s\n", tekst2);
    return 0;
}
