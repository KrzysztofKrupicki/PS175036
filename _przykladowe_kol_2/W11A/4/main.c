#include <stdio.h>
#include <stdlib.h>

struct Movie{
    char *title;
    int duration;
};

struct Movie shortestDuration(struct Movie tab[], int size){
    struct Movie shortest = tab[0];
    for(int i = 0; i<size; i++){
        if(tab[i].duration < shortest.duration) shortest = tab[i];
    }
    return shortest;
}

int main()
{
    struct Movie tabM[4] = {
        {"Ida", 5},
        {"Bogowie", 12},
        {"Oblawa", 7},
        {"Samo swoi", 5}
    };
    struct Movie result = shortestDuration(tabM, 4);
    printf("%s %d\n", result.title, result.duration);
    return 0;
}
