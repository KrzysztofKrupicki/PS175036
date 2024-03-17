#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 5, b = 3;
    printf("\nPrzed: %d %d", a, b);
    swap(&a, &b);
    printf("\nPo: %d %d", a, b);
    return 0;
}
