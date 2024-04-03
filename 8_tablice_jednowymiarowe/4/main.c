#include <stdio.h>
#include <stdlib.h>

void copyArr(unsigned int n, int tab1[n], int tab2[n]){
    for (int i = 0; i<n; i++){
        tab2[i] = tab1[i];
    }
}

int main()
{
    int numbers1[3] = {5, 2, 6};
    int numbers2[3] = {0};
    int n = 3;
    printf("\nPrzed: ");
    for (int i=0; i<n; i++){
        printf("\n%d %d", numbers1[i], numbers2[i]);
    }
    copyArr(n, numbers1, numbers2);
    printf("\nPo: ");
    for (int i=0; i<n; i++){
        printf("\n%d %d", numbers1[i], numbers2[i]);
    }
    return 0;
}
