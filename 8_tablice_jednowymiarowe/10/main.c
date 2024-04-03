#include <stdio.h>
#include <stdlib.h>

int minIdxMax(unsigned int n, int tab[n]){
    int min = tab[0];
    int index = 0;
    for (int i = 1; i<n; i++){
        if (tab[i] <= min){
            min = tab[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int tab[6] = {5, -2, 8, -2, 1, 6};
    int n = 6;
    printf("%d", minIdxMax(6, tab));
    return 0;
}
