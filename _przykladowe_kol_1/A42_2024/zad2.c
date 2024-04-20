#include <stdio.h>
#include <stdlib.h>

void zad2(unsigned int n){
    if (n == 0) exit (-1);
    double result = 0;
    for (int i = 1; i<=n; i++){
        result += 1./i;
    }
    printf("%lf\n", result);
}

int main()
{
	int x;
	scanf("%d", &x);
    zad2(x);
    return 0;
}
