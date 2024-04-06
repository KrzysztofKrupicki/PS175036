#include <stdio.h>
#include <stdlib.h>

int zad2(unsigned int n){
    int suma = 0;
    for (int i=1; i<n; i++){
        if (n % i == 0) suma += i;
    }
    if (suma == n) return 1;
    return 0;
}

int main()
{
    printf("%d\n", zad2(6));
    printf("%d\n", zad2(28));
    printf("%d\n", zad2(25));
    return 0;
}
