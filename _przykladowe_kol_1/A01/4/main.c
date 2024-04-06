#include <stdio.h>
#include <stdlib.h>

int sequence_value(unsigned int n){
    if (n == 0) return 1;
    else if (n%3 == 0) return sequence_value(n/3) +2;
    else if (n%3 == 1) return sequence_value(n/3) +1;
    else return sequence_value(n/3) -1;
}

int main()
{
    printf("%d\n", sequence_value(0));
    printf("%d\n", sequence_value(1));
    printf("%d\n", sequence_value(2));
    printf("%d\n", sequence_value(3));
    printf("%d\n", sequence_value(4));
    printf("%d\n", sequence_value(5));
    return 0;
}
