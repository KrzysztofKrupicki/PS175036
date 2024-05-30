#include <stdio.h>
#include <stdlib.h>

int zadanie3(int **tab, int n){
    int iloczyn = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(*(*(tab+i)+j) % 3 == 0) iloczyn *= *(*(tab+i)+j);
        }
    }
    return iloczyn;
}

int main()
{
    int **tab = (int**)malloc(sizeof(int)*4);
    tab[0] = (int*)malloc(sizeof(int)*4);
    tab[1] = (int*)malloc(sizeof(int)*4);
    tab[2] = (int*)malloc(sizeof(int)*4);
    tab[3] = (int*)malloc(sizeof(int)*4);
    *(*(tab+0)+0) = -2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = 4;
    *(*(tab+0)+3) = -6;
    *(*(tab+1)+0) = -5;
    *(*(tab+1)+1) = 6;
    *(*(tab+1)+2) = -2;
    *(*(tab+1)+3) = 2;
    *(*(tab+2)+0) = 4;
    *(*(tab+2)+1) = -3;
    *(*(tab+2)+2) = 5;
    *(*(tab+2)+3) = -8;
    *(*(tab+3)+0) = 9;
    *(*(tab+3)+1) = 7;
    *(*(tab+3)+2) = 0;  // 0 jest podzielne przez 3
    *(*(tab+3)+3) = 4;
    printf("%d\n", zadanie3(tab, 4));
    return 0;
}
