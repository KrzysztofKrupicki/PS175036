#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *createWithHead(){
    struct element *newList = malloc(sizeof(struct element));
    newList->next = NULL;
    return newList;
};

int main()
{
    struct element *nowa_lista = createWithHead();
    nowa_lista->next = malloc(sizeof(struct element));
    nowa_lista->next->x = 12;
    nowa_lista->next->next = malloc(sizeof(struct element));
    nowa_lista->next->next->x = 4;
    nowa_lista->next->next->next = NULL;
    while(nowa_lista->next != NULL){
        nowa_lista = nowa_lista->next;
        printf("%d\n", nowa_lista->x);
    }
    return 0;
}
