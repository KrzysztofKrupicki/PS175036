#include <stdio.h>
#include <stdlib.h>

void zad5(unsigned int n, double tab1[], double tab2[], double tab3[]){
    for (int i=0; i<n; i++){
        tab3[i] = tab1[i] * tab2[i];
    }
}

void zad5UP(unsigned int n, double *tab1, double *tab2, double *tab3){
    for (int i=0; i<n; i++){
        *(tab3+i) = *(tab1+i) * *(tab2+i);
    }
}

int main()
{
    double tab1[] = {2.0, 4.0, 6.0};
    double tab2[] = {3.0, 5.0, 7.0};
    double tab3[3];
    int n = 3;
    zad5(n, tab1, tab2, tab3);
    for (int i=0; i<n; i++){
        printf("%lf\n", tab3[i]);
    }


    double *tab1UP = malloc(n*sizeof(double));
    double *tab2UP = malloc(n*sizeof(double));
    double *tab3UP = malloc(n*sizeof(double));
    *tab1UP = 2.0;
    *(tab1UP+1) = 4.0;
    *(tab1UP+2) = 6.0;
    *tab2UP = 3.0;
    *(tab2UP+1) = 5.0;
    *(tab2UP+2) = 7.0;
    zad5UP(n, tab1UP, tab2UP, tab3UP);
    for (int i=0; i<n; i++){
        printf("%lf\n", *(tab3UP+i));
    }
    return 0;
}
