#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for (int i = start; i <= end; i++) {
        printf("%d\n", func(i));
    }
}

int foo(int number){
    return number * number;
}

int main()
{
    applyFunction(foo, 2, 7);
    return 0;
}
