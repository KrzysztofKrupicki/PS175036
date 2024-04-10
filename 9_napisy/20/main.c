#include <stdio.h>
#include <stdlib.h>

int countOdds(wchar_t nap[]){
    int counter = 0;
    int dlugosc = 0;
    while(nap[dlugosc]){
        if(nap[dlugosc] >= '0' && nap[dlugosc] <= '9' && (nap[dlugosc]-48)%2 == 1){
            counter++;
        }
        dlugosc++;
    }
    return counter;
}

int main()
{
    wchar_t str[] = L"przyp4d3k t3st0wy 431"; // 4
    printf("%d\n", countOdds(str));
    return 0;
}
