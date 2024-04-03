#include <stdio.h>
#include <stdlib.h>

int findWithCondition(int tab[], unsigned int n, int (*operation)(int)){
    for (int i=n-1; i>=0; i--){
        printf("%d", i);
        if (operation(tab[i]) == 1){
            return i;
        }
    }
    return -1;
}

int condition(int n){
    return n > 10;
}

int main()
{
    int n = 5;
    int tab[5] = {11, -5, 1, 7, 10};
    printf("%d", findWithCondition(tab, n, condition));
    return 0;
}
