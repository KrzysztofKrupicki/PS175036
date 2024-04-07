#include <stdio.h>
#include <stdlib.h>

void zad2(unsigned int n){
    int potega5 = 1;
    while (potega5 < n){
        potega5 *= 5;
    }
    printf("%d\n", potega5/5);
}

int main()
{
    zad2(10);
    zad2(50);
    zad2(125);
    return 0;
}
