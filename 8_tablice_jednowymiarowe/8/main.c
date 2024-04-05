#include <stdio.h>
#include <stdlib.h>

int minValue(unsigned int n, int tab[]){
    int min = tab[0];
    for (int i = 1; i<n; i++){
        if (tab[i] < min){
            min = tab[i];
        }
    }
    return min;
}

int main()
{
    int tab[6] = {5, 2, -5, 1, 8, 6};
    int n = 6;
    printf("%d", minValue(n, tab));
    return 0;
}
