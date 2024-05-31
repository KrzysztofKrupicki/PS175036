#include <stdio.h>
#include <stdlib.h>

int zadanie3(int **tab, int n){
    int maxIdRow = 0;
    int maxElement = *(*(tab+0)+0);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(*(*(tab+i)+j) >= maxElement){
                maxElement = *(*(tab+i)+j);
                maxIdRow = i;
            }
        }
    }
    return maxIdRow;
}

int main()
{
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);
    *(*(tab+0)+0) = 3;
    *(*(tab+0)+1) = -4;
    *(*(tab+0)+2) = 5;
    *(*(tab+1)+0) = 1;
    *(*(tab+1)+1) = 22;
    *(*(tab+1)+2) = -33;
    *(*(tab+2)+0) = -3;
    *(*(tab+2)+1) = 5;
    *(*(tab+2)+2) = 22;
    printf("%d\n", zadanie3(tab, 3));
    return 0;
}
