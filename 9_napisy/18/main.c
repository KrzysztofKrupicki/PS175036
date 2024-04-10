#include <stdio.h>
#include <stdlib.h>

wchar_t *copyEveryThird(wchar_t nap[]){
    int nowa_dlugosc = 0;
    for (int i = 0; nap[i] != '\0'; i++){
        if(i%3 == 0){
            nowa_dlugosc++;
        }
    }
    wchar_t *nowy = malloc((nowa_dlugosc+1)*sizeof(wchar_t));\
    nowa_dlugosc = 0;
    for (int i = 0; nap[i] != '\0'; i++){
        if(i%3 == 0){
            nowy[nowa_dlugosc] = nap[i];
            nowa_dlugosc++;
        }
    }
    nowy[nowa_dlugosc] = '\0';
    return nowy;
}

int main()
{
    wchar_t str1[] = L"ABCXYZ"; // AX
    copyEveryThird(str1);
    wprintf(L"%s", copyEveryThird(str1));
    return 0;
}
