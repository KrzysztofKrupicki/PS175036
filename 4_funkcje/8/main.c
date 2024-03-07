#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls(){
    static int licznik = 0;
    licznik++;
    printf("%d\n", licznik);
}

int main()
{
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}
