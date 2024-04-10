#include <stdio.h>
#include <stdlib.h>

void wStrConcat(wchar_t nap1[], wchar_t nap2[], wchar_t nap3[]){
    int dlugosc1 = 0;
    while(nap1[dlugosc1]){
        nap3[dlugosc1] = nap1[dlugosc1];
        dlugosc1++;
    }
    int dlugosc2 = 0;
    while(nap2[dlugosc2]){
        nap3[dlugosc1] = nap2[dlugosc2];
        dlugosc1++;
        dlugosc2++;
    }
    nap3[dlugosc1] = '\0';
}

int main()
{
    wchar_t str1[] = L"Hello ";
    wchar_t str2[] = L"world!";
    wchar_t str3[20];
    wStrConcat(str1, str2, str3);
    wprintf(L"%s", str3);
    return 0;
}
