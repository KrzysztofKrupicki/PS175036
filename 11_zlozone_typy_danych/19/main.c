#include <stdio.h>
#include <stdlib.h>

union Number {
    int integer;
    float floating;
};

struct wrapNumber{
    union Number number;
    int intOrFloat;
};

void initIntNumber(struct wrapNumber *number, int value){
    number->number.integer = value;
    number->intOrFloat = 0;
}

void initFloatNumber(struct wrapNumber *number, float value){
    number->number.floating = value;
    number->intOrFloat = 1;
}

int main()
{
    struct wrapNumber new_number;
    initIntNumber(&new_number, 12);
    printf("(0 - int, 1 - float): %d \nNumber: %d\n", new_number.intOrFloat, new_number.number.integer);
    initFloatNumber(&new_number, 3.14);
    printf("(0 - int, 1 - float): %d \nNumber: %lf\n", new_number.intOrFloat, new_number.number.floating);
    return 0;
}
