#include <stdio.h>
#include <stdlib.h>

int zad2(char *napis){
    int dlugosc = 0;
    int licznik = 0;
    while(napis[dlugosc] != '\0'){
        if(napis[dlugosc] >= '0' && napis[dlugosc] <= '9' && napis[dlugosc] % 2 == 0) licznik++;
        dlugosc++;
    }
    return dlugosc + licznik;
}

int main()
{
    printf("%d\n", zad2("kod2468")); // 11
    printf("%d\n", zad2("abc13")); // 5
    printf("%d\n", zad2("2468")); // 8
    printf("%d\n", zad2("wmii")); // 4
    return 0;
}
