#include <stdio.h>
#include <stdlib.h>

int sum_odd_indices(unsigned int n, int tab[]){
    int sum = 0;
    for (int i=1; i<n; i+=2){
        sum += tab[i];
    }
    return sum;
}

int main()
{
    int tab[7] = {5, 2, 8, 4, 1, 6, 7};
    int n = 7;
    printf("%d", sum_odd_indices(n, tab));
    return 0;
}
