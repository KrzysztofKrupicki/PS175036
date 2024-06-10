#include <stdio.h>
#include <stdlib.h>

int floor_sqrt(int n){
    int i=0;
    for(i = 0; i*i <= n; i++){}
    return --i;
}

int zad2(int n){
    if(n == 0 || n == 1) return 1;
    if(n % 2 == 0) return zad2(n/2);
    return floor_sqrt(2*(n/2));
}

int main()
{
    printf("%d\n", zad2(1));
    printf("%d\n", zad2(2));
    printf("%d\n", zad2(3));
    printf("%d\n", zad2(4));
    printf("%d\n", zad2(5));
    printf("%d\n", zad2(6));
    printf("%d\n", zad2(7));
    printf("%d\n", zad2(8));
    printf("%d\n", zad2(9));
    printf("%d\n", zad2(10));
    return 0;
}
