#include <stdio.h>
#include <stdlib.h>

void zad2(char *napis1, char *napis2){
    int dlugosc = 0;
    int zapis = 0;
    while(napis1[dlugosc] != '\0'){
        if(dlugosc % 2 == 1) napis2[zapis++] = napis1[dlugosc];
        dlugosc++;
    }
    napis2[zapis] = '\0';
}

int main()
{
    char napis1[10] = "abcdef";
    char napis2[10];
    zad2(napis1, napis2);
    printf("%s\n", napis2);
    return 0;
}
