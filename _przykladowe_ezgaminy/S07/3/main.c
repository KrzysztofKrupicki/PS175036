#include <stdio.h>
#include <stdlib.h>

struct Programista{
    char *nazwisko;
    int doswiadczenie;
};

char *zad3(struct Programista tabP[], int size){
    int maxExperience = tabP[0].doswiadczenie;
    int maxExperienceId = 0;
    int i = 0;
    for(i = 0; i<size; i++){
        if(tabP[i].doswiadczenie >= maxExperience) {
            maxExperience = tabP[i].doswiadczenie;
            maxExperienceId = i;
        }
    }
    return tabP[maxExperienceId].nazwisko;
}

int main()
{
    struct Programista tabP[3] = {
        {"Jan Kowalski", 32},
        {"Adam Nowak", 35},
        {"Janusz Kowalewski", 24}
    };
    printf("%s\n", zad3(tabP, 3));
    return 0;
}
