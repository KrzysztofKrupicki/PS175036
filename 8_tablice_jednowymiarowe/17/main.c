#include <stdio.h>
#include <stdlib.h>

int findElement(int tab[], unsigned int n, int val, int (*operation)(int, int)){
    for (int i=0; i<n; i++){
        if (operation(tab[i], val) == 1){
            return i;
        }
    }
    return -1;
}

int isEqual(int n1, int n2){
    return n1 == n2;
}

int main()
{
    int n = 5;
    int tab[5] = {-4, 5, 1, -7, 1};
    printf("%d", findElement(tab, n, 1, isEqual));
    return 0;
}
