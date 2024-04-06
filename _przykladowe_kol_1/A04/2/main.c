#include <stdio.h>
#include <stdlib.h>

int zad2(unsigned int a, unsigned int b, unsigned int c){
    int liczba;
    for (int i=0; i<1000; i++){
        if (i%a == 0 && i%b == 0 && i%c == 0){
            liczba = i;
        }
    }
    return liczba;
}

int main()
{
    printf("%d\n", zad2(2, 5, 7));
    return 0;
}
