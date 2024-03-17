#include <stdio.h>
#include <stdlib.h>

int minPtr(int *num1, int *num2, int *num3){
    if (*num1 <= *num2 && *num1 <= *num3){
        return *num1;
    }
    if (*num2 <= *num1 && *num2 <= *num3){
        return *num2;
    }
    return *num3;
}

int main()
{
    int a = 5.0, b = 3.0, c = 2.0;
    printf("%d\n", minPtr(&c, &a, &b));
    return 0;
}
