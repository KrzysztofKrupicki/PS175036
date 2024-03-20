#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value){
    if (condition(value) == 1){
        return action(value);
    }
    return value;
}

int fooA(int number){
    return number - 5;
}
int fooB(int number){
    return number * 3;
}

int main()
{
    printf("\n%d", applyCondition(fooA, fooB, 6));
    printf("\n%d", applyCondition(fooA, fooB, 3));
    return 0;
}
