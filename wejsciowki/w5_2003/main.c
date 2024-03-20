#include <stdio.h>
#include <stdlib.h>

// Wariant 522
void substractAndStore(int substractor, int *numberPtr){
    *numberPtr = *numberPtr - substractor;
}

int main()
{
    int a = 2;
    int b = 7;
    printf("\nPrzed: a = %d, b = %d", a, b);
    substractAndStore(a, &b);
    printf("\nPo: a = %d, b = %d", a, b);
    return 0;
}
