#include <stdio.h>
#include <stdlib.h>

void sumTwoNumbers(int a, int b){
    printf("%d", a + b);
}

int main()
{
    sumTwoNumbers(5, 6);
    printf("\n");
    sumTwoNumbers(5, -6);
    return 0;
}
