#include <stdio.h>
#include <stdlib.h>

int function19(unsigned int n, int tab[]){
    for (int i=0; i<(n/2); i++){
        if (tab[i] != tab[n-1-i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 7;
    int tab[7] = {5, 2, 8, 4, 1, 6, 7};
    //int tab[7] = {5, 2, 8, 4, 8, 2, 5};
    printf("%d", function19(n, tab));
    return 0;
}
