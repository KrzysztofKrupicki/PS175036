#include <stdio.h>
#include <stdlib.h>

void function23(unsigned int n, double tab1[n], double tab2[n], double tab3[n]){
    for (int i=0; i<n; i++){
        tab3[i] = tab1[i]*tab2[i];
    }
}

int main()
{
    int n = 5;
    double tab1[5] = {-4, 5, 1, -7, 9};
    double tab2[5] = {2, 6, -9, -1, 0};
    double tab3[5];
    printf("\nPrzed:\ntab1 tab2 tab3");
    for (int i=0; i<n; i++){
        printf("\n%lf %lf %lf", tab1[i], tab2[i], tab3[i]);
    }
    function23(n, tab1, tab2, tab3);
    printf("\nPo:\ntab1 tab2 tab3");
    for (int i=0; i<n; i++){
        printf("\n%lf %lf %lf", tab1[i], tab2[i], tab3[i]);
    }
    return 0;
}
