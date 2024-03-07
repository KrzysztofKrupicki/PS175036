#include <stdio.h>
#include <stdlib.h>

int calculatePowerTwo(int n){
    int potega = 2;
    if (n > 1) {
        for (n; n > 1; n--){
            potega = potega*2;
        }
    }
    return potega;
}

int main()
{
    printf("%d\n", calculatePowerTwo(5));
    printf("%d\n", calculatePowerTwo(10));
    return 0;
}
