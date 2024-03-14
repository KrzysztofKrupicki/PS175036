#include <stdio.h>
#include <stdlib.h>

float calculatePowerTwo(int n){
    float potega = 1;
    if (n > 0) {
        for (n; n > 0; n--){
            potega = potega*2;
        }
        return potega;
    }
    if (n < 0){
        for (n; n < 0; n++){
            potega = potega/2;
        }
        return potega;
    }
    return potega;
}

int main()
{
    printf("%f\n", calculatePowerTwo(5));
    printf("%f\n", calculatePowerTwo(-2));
    printf("%f\n", calculatePowerTwo(0));
    printf("%f\n", calculatePowerTwo(1));
    printf("%f\n", calculatePowerTwo(-1));
    printf("%f\n", calculatePowerTwo(10));
    return 0;
}
