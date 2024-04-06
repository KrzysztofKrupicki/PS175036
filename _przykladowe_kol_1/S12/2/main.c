#include <stdio.h>
#include <stdlib.h>

double zad2(unsigned int n){
    double euler = 1;
    double silnia = 1;
    for (int i = 1; i<=n; i++){
        silnia *= i;
        euler += (1/silnia);
    }
    return euler;
}

int main()
{
    printf("%lf\n", zad2(10));
    return 0;
}
