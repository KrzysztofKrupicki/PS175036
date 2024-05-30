#include <stdio.h>
#include <stdlib.h>

int zadanie2(char *napis){
    int index = -1;
    int dlugosc = 0;
    while(napis[dlugosc] != '\0'){
        if(napis[dlugosc] >= '0' && napis[dlugosc] <= '9') index = dlugosc;
        dlugosc++;
    }
    return index;
}

int main()
{
    printf("%d\n", zadanie2("abc123"));
    printf("%d\n", zadanie2("brak cyfr"));
    return 0;
}
