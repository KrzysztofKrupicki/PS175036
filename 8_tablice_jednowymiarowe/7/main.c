#include <stdio.h>
#include <stdlib.h>

int maxValue(unsigned int n, int tab[]){
    int max = tab[0];
    for (int i = 1; i<n; i++){
        if (tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}

int main()
{
    int tab[6] = {5, 2, -5, 1, 8, 6};
    int n = 6;
    printf("%d", maxValue(n, tab));
    return 0;
}
