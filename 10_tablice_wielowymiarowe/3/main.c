#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(unsigned int n, unsigned int m, int tab[n][m]){
    int index = 0;
    int maxElement = tab[0][0];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if(tab[i][j]>maxElement){
                index = i;
                maxElement = tab[i][j];
            }
        }
    }
    return index;
}

int main()
{
    int n = 3, m = 3;
    int tab[3][3] = {{1,2,4},{-2,3,5},{5,7,1}};
    printf("%d\n", maxRowIdx(n, m, tab));
    return 0;
}
