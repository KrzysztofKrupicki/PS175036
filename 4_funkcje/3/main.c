#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(unsigned int n){
    int silnia = 1;
    while (n > 1) {
        silnia *= n;
        n--;
    }
    return silnia;
}

int main()
{
    printf("%d\n", calculateFactorial(3));
    printf("%d\n", calculateFactorial(4));
    printf("%d\n", calculateFactorial(5));
    return 0;
}
