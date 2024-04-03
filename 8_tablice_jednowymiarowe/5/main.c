#include <stdio.h>
#include <stdlib.h>

void revCopy(unsigned int n, int tab1[n], int tab2[n]){
    for (int i = 0; i<n; i++){
        tab2[i] = tab1[n-i-1];
    }
}

int main()
{
    int numbers1[5] = {5, 2, -3, 6, 11};
    int numbers2[5] = {0};
    int n = 5;
    printf("\nPrzed: ");
    for (int i=0; i<n; i++){
        printf("\n%d %d", numbers1[i], numbers2[i]);
    }
    revCopy(n, numbers1, numbers2);
    printf("\nPo: ");
    for (int i=0; i<n; i++){
        printf("\n%d %d", numbers1[i], numbers2[i]);
    }
    return 0;
}
