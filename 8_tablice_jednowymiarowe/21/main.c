#include <stdio.h>
#include <stdlib.h>

int function21(unsigned int n, int tab[]){
    int max = abs(tab[0]);
    int index = 0;
    for (int i=0; i<n; i++){
        if (abs(tab[i]) >max){
            max = abs(tab[i]);
            index = i;
        }
    }
    return index;
}

int main()
{
    int n = 5;
    int tab[5] = {-4, 5, 1, -7, 2};
    printf("%d", function21(n, tab));
    return 0;
}
