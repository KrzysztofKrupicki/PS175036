#include <stdio.h>
#include <stdlib.h>

void swapSign(double *ptr1, double *ptr2){
    if (*ptr1 >= 0 && *ptr2 < 0){
        double temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    else if (*ptr2 >= 0 && *ptr1 < 0){
        double temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

}

int main()
{
    double a = 5, b = -3;
    printf("\nPrzed: %lf %lf", a, b);
    swapSign(&a, &b);
    printf("\nPo: %lf %lf", a, b);
    return 0;
}
