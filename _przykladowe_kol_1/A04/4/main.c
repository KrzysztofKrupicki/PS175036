#include <stdio.h>
#include <stdlib.h>

int sequence_value(unsigned int n){
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n % 3 == 0) return sequence_value(n/3) +1;
    if (n % 3 == 1) return 2*sequence_value(n/3);
    if (n % 3 == 2) return sequence_value(n/3) -1;
}

int main()
{
    printf("%d\n", sequence_value(1));
    printf("%d\n", sequence_value(2));
    printf("%d\n", sequence_value(3));
    printf("%d\n", sequence_value(4));
    printf("%d\n", sequence_value(5));
    printf("%d\n", sequence_value(6));
    printf("%d\n", sequence_value(7));
    printf("%d\n", sequence_value(8));
    printf("%d\n", sequence_value(9));
    return 0;
}
