#include <stdio.h>
#include <stdlib.h>

// Wariant 801
int func(char nap[]){
    int dlugosc = 0;
    int ilosc = 0;
    while(nap[dlugosc]){
        if (!(nap[dlugosc] >= '0' && nap[dlugosc] <= '9')){
            ilosc++;
        }
        dlugosc++;
    }
    return ilosc;
}

int main()
{
    char str[] = "przyp4d3k t3st0wy"; // dlugosc = 17, ilosc = 13
    printf("%d\n", func(str));
    return 0;
}
