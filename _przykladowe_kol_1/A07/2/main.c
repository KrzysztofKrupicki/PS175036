#include <stdio.h>
#include <stdlib.h>

double zad2(unsigned int n){
    double result = 0;
    for (int k = 0; k<=n; k++){
        if (k % 2 == 0) result += 1.0/(2*k+1);
        else result += -1.0/(2*k+1);
    }
    return result*4;
}

int main()
{
    printf("%lf\n", zad2(1));
    printf("%lf\n", zad2(2));
    printf("%lf\n", zad2(999999));
    return 0;
}
