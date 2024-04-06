#include <stdio.h>
#include <stdlib.h>

int zad2(int n){
    if (n < 0) return zad2(-n);
    if (n/10 == 0){
        return n%10;
    }
    return zad2(n/10) + n%10;
}

int main()
{
    printf("%d\n", zad2(9876));
    printf("%d\n", zad2(-67));
    printf("%d\n", zad2(34));
    return 0;
}
