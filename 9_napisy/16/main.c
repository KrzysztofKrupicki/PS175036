#include <stdio.h>
#include <stdlib.h>

int w16(wchar_t nap[]){
    int dlugosc = 0;
    int cyfra = 0;
    int mnoznik = 100;
    while(nap[dlugosc]){
        if (!(nap[dlugosc] >= '0' && nap[dlugosc] <= '9')) return 0;
        cyfra += (nap[dlugosc]-'0') *mnoznik;
        mnoznik /= 10;
        dlugosc++;
    }
    return cyfra;
}

int main()
{
    wchar_t str1[] = L"3d2";
    wchar_t str2[] = L"432";
    printf("%d\n", w16(str1));
    printf("%d\n", w16(str2));
    return 0;
}
