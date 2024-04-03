#include <stdio.h>
#include <stdlib.h>

float average(unsigned int n, int tab[n]){
    float suma = 0;
    for (int i = 0; i<n; i++){
        suma += tab[i];
    }
    float avg = suma/n;
    return avg;
}

int main()
{
    int numbers[6] = {5, 2, -5, 1, 8, 6};
    printf("%f", average(6, numbers));
    return 0;
}
