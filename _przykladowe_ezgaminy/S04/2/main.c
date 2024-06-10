#include <stdio.h>
#include <stdlib.h>

int positive_count(int *tab, int size, int (*is_positive)(int)){
    int licznik = 0;
    for(int i=0; i<size; i++){
        if(is_positive(*(tab+i)) >0) licznik++;
    }
    return licznik;
}

int is_positive(int n){
    if(n > 0) return 1;
    return 0;
}
int main()
{
    int *tab = malloc(sizeof(int)*5);
    *(tab+0) = 2;
    *(tab+1) = -4;
    *(tab+2) = 1;
    *(tab+3) = -2;
    *(tab+4) = 5;
    printf("%d\n", positive_count(tab, 5, is_positive));
    return 0;
}
