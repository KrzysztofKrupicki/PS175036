#include <stdio.h>
#include <stdlib.h>

void wStrCopyNew(wchar_t nap1[], wchar_t nap2[]){
    int dlugosc = 0;
    while(nap1[dlugosc]){
        nap2[dlugosc] = nap1[dlugosc];
        dlugosc++;
    }
    nap2[dlugosc] = '\0';
}

int main()
{
    wchar_t str1[] = L"przypadek";
    wchar_t str2[20];
    wStrCopyNew(str1, str2);
    wprintf(L"%s", str2);
    return 0;
}
