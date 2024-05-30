#include <stdio.h>
#include <stdlib.h>

struct Szkola{
    int typ;
    int numer;
};

int highestSchoolNumber(struct Szkola tab[], int size){
    int highest = tab[0].numer;
    for(int i = 1; i<size; i++){
        if(tab[i].numer > highest) highest = tab[i].numer;
    }
    return highest;
}

int main()
{
    struct Szkola tabS[4] = {
        {3, 44},
        {2, 23},
        {5, 38},
        {4, 42}
    };
    printf("%d\n", highestSchoolNumber(tabS, 4));
    return 0;
}
