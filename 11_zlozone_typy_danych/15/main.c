#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Computer{
    char manufacturer[30];
    int usage_hours;
};

struct Computer *initComputer(char *manufacturer, int usage_hours){
    int dlugosc = 0;
    while (manufacturer[dlugosc] != '\0') dlugosc++;
    if (dlugosc < 2 && usage_hours <= 0) return NULL;
    struct Computer *newComputer = malloc(sizeof(struct Computer));
    strcpy(newComputer->manufacturer, manufacturer);
    newComputer->usage_hours = usage_hours;
    return newComputer;
};

void increaseUsage(struct Computer *computer){
    computer->usage_hours += 100;
}

int main()
{
    struct Computer *nowy_komputer = initComputer("Asus", 14);
    if (nowy_komputer == NULL) exit(-1);
    increaseUsage(nowy_komputer);
    printf("%d\n", nowy_komputer->usage_hours);
    return 0;
}
