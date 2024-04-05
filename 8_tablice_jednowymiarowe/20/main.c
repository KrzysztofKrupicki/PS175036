#include <stdio.h>
#include <stdlib.h>

int function20(unsigned int n, int tab1[], int tab2[]){
    for (int i=0; i<n; i++){
        if (tab1[i] != tab2[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 5;
    int tab1[5] = {-4, 5, 1, -7, 9};
    int tab2[5] = {2, 6, -9, -1, 0};
    printf("%d", function20(n, tab1, tab2));
    return 0;
}
