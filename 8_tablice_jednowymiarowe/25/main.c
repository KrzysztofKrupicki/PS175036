#include <stdio.h>
#include <stdlib.h>

int count_positive_elements(unsigned int n, int tab[]){
    int counter = 0;
    for (int i=0; i<n; i++){
        if (tab[i]<0){
            counter++;
        }
    }
    return counter;
}

int main()
{
    int tab[7] = {-5, 2, -8, 4, 1, -6, 7};
    int n = 7;
    printf("%d", count_positive_elements(n, tab));
    return 0;
}
