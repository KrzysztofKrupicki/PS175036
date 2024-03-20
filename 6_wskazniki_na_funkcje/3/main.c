#include <stdio.h>
#include <stdlib.h>

int applyFunction(int (*func1)(int), int (*func2)(int), int n){
    if ((func1(n) >0) && (func2(n) >0)) {
        return 1;
    }
    return 0;
}

int fooA(int number){
    return number -4;
}

int fooB(int number){
    return number * number;
}

int main()
{
    printf("\n%d", applyFunction(fooA, fooB, 3));
    printf("\n%d", applyFunction(fooA, fooB, 6));
    return 0;
}
