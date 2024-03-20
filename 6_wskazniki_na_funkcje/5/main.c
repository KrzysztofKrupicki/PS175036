#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int (*modifer)(int), int number1, int number2){
    return modifer(number1) + modifer(number2);
}

int foo(int number){
    return number +1;
}

int main()
{
    printf("%d", modifyAndSum(foo, 3, 6));
    return 0;
}
