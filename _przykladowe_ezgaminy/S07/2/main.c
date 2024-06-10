#include <stdio.h>
#include <stdlib.h>

int zad2(char *napis){
    int dlugosc = 0;
    int licznik = 0;
    char *hex = "0123456789ABCDEFabcdef";
    while(napis[dlugosc] != '\0'){
        for(int i = 0; hex[i] != '\0'; i++){
            if(napis[dlugosc] == hex[i]) licznik++;
        }
        dlugosc++;
    }
    return licznik;
}

int main()
{
    printf("%d\n", zad2("testowy 123"));
    return 0;
}
