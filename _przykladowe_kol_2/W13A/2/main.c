#include <stdio.h>
#include <stdlib.h>

int findLast(char *napis){
    int dlugosc = 0;
    int index = -1;
    while(napis[dlugosc] != '\0'){
        if(napis[dlugosc] >= '0' && napis[dlugosc] <= '9') index = dlugosc;
        dlugosc++;
    }
    return index;
}

int main()
{
    printf("%d\n", findLast("abbbc39WW"));
    return 0;
}
