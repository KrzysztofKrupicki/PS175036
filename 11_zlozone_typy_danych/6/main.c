#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
};

struct Person *initPerson(char *name, int age){
    struct Person *newPerson = (struct Person*)malloc(sizeof(struct Person));
    strcpy(newPerson->name, name);
    newPerson->age = age;
    return newPerson;
}

void showPerson(struct Person *person){
    printf("Imie: %s\n", person->name);
    printf("Wiek: %d\n", person->age);
}

void birthday(struct Person *person){
    person->age += 1;
}

int main()
{
    struct Person *nowa_osoba = initPerson("Jan", 47);
    showPerson(nowa_osoba);
    birthday(nowa_osoba);
    showPerson(nowa_osoba);
    return 0;
}
