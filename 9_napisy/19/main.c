#include <stdio.h>
#include <stdlib.h>

int indexLower(wchar_t nap[]){
    int dlugosc = 0;
    while(nap[dlugosc]){
        if (nap[dlugosc] >= 'a' && nap[dlugosc] <= 'z'){
            return dlugosc;
        }
        dlugosc++;
    }
    return 0;
}

int main()
{
    wchar_t str[] = L"CODEblocks"; // 4
    printf("%d\n", indexLower(str));
    return 0;
}
