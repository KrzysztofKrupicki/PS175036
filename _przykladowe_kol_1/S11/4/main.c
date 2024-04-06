#include <stdio.h>
#include <stdlib.h>

int sequence_value_d(unsigned int n){
    if (n ==0) return 3;
    if (n % 2 == 0) return sequence_value_d(n-1) -3;
    if (n % 2 == 1) return 2*sequence_value_d(n-1) +4;
}

int main()
{
    printf("%d\n", sequence_value_d(0));
    printf("%d\n", sequence_value_d(1));
    printf("%d\n", sequence_value_d(2));
    printf("%d\n", sequence_value_d(3));
    printf("%d\n", sequence_value_d(4));
    printf("%d\n", sequence_value_d(5));
    return 0;
}
