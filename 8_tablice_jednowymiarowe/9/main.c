#include <stdio.h>
#include <stdlib.h>

int maxIdx(unsigned int n, int tab[]){
    int max = tab[0];
    int index = 0;
    for (int i = 1; i<n; i++){
        if (tab[i] > max){
            max = tab[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int tab[6] = {5, 2, 8, -5, 8, 6};
    int n = 6;
    printf("%d", maxIdx(n, tab));
    return 0;
}
