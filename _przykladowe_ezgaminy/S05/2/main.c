#include <stdio.h>
#include <stdlib.h>

int zad2(char *napis){
    if(*napis == '\0') return 0;
    if(*napis >= 'A' && *napis <= 'Z') return 1 + zad2(napis+1);
    return zad2(napis+1);
}

int main()
{
    printf("%d\n", zad2("Hello World!"));
    printf("%d\n", zad2("hello!"));
    return 0;
}
