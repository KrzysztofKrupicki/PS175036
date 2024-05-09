#include <stdio.h>
#include <stdlib.h>

int sumMatrix(unsigned int n, unsigned int m, int tab[n][m]){
    int suma = 0;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            suma += tab[i][j];
        }
    }
    return suma;
}

int main()
{
    int n = 3, m = 3;
    int tab[3][3] = {{1,2,4},{-2,3,5},{5,7,1}};
    printf("%d\n", sumMatrix(n, m, tab));
    return 0;
}
