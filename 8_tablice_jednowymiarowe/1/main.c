#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], unsigned int size){
    int max = numbers[0];
    for (int i = 1; i<size; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("%d", max);
}

int main()
{
    int numbers[6] = {5, 2, -5, 1, 8, 6};
    findMaxValue(numbers, 6);
    return 0;
}
