#include <stdio.h>
#include <stdlib.h>

# Wariant 712
int find_max_odd(unsigned int n, int arr[]){
    int max = -1;
    for (int i = 0; i<n; i++){
        if (arr[i] % 2 == 1 && arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {5, 3, 7, 1, 9, 1};
    //int arr[] = {0, 4, 6, 2, 8, 2};
    printf("%d", find_max_odd(6, arr));
    return 0;
}
