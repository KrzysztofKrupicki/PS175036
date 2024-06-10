#include <stdio.h>
#include <stdlib.h>

int zad2(wchar_t *napis){
    int liczba = 0;
    int mnoznik = 100;
    for(int i = 0; i<3; i++){
        if(napis[i] < L'0' || napis[i] > L'9') return 0;
        liczba += mnoznik * (napis[i]-L'0');
        mnoznik /= 10;
    }
    return liczba;
}

int main()
{
    wchar_t *napis = L"2d4";
    wchar_t *napis2 = L"244";
    printf("%d\n", zad2(napis));
    printf("%d\n", zad2(napis2));
    return 0;
}
