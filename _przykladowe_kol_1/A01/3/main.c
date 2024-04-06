#include <stdio.h>
#include <stdlib.h>

int sum_of_squares(int const *num1, int *const num2){
    return *num1 * *num1 + *num2 * *num2;
}

int main()
{
    int x = 5;
    int y = 7;
    printf("%d\n", sum_of_squares(&x, &y));
    return 0;
}
