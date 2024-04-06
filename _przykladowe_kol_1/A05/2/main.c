#include <stdio.h>
#include <stdlib.h>

int zad2(int n){
    if (n < 0) return zad2(-n);
    int iloczyn = 1;
    while (n){
        iloczyn *= n%10;
        n = n/10;
    }
    return iloczyn;
}

int main()
{
    printf("%d\n", zad2(45));
    printf("%d\n", zad2(-32));
    return 0;
}
