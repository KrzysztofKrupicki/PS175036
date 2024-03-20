#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int foo(int n){
    return n * 2;
}

int main()
{
    int a = 4;
    printf("%d", calculate(foo, a));
    return 0;
}
