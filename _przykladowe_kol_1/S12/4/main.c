#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(unsigned int n){
    if (n/10 == 0){
        return n % 10;
    }
    return sum_of_digits(n/10) + (n % 10);
}

int main()
{

    printf("%d\n", sum_of_digits(6));
    printf("%d\n", sum_of_digits(9876));
    printf("%d\n", sum_of_digits(123456789));
    return 0;
}
