#include <stdio.h>
#include <stdlib.h>

void rmOdd(wchar_t nap[]){
    int dlugosc = 0;
    int nowa_dlugosc = 0;
    while(nap[dlugosc]){
        if(dlugosc%2 == 0){
            nap[nowa_dlugosc] = nap[dlugosc];
            nowa_dlugosc++;
        }
        dlugosc ++;
    }
    nap[nowa_dlugosc] = '\0';
}

int main()
{
    wchar_t str[] = L"programowanie"; //pormwne
    rmOdd(str);
    wprintf(L"%s", str);
    return 0;
}
