#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *createNoHead(){
    struct element *newList = malloc(sizeof(struct element));
    return newList;
};

int main()
{
    struct element *nowa_lista = createNoHead();
    nowa_lista->x = 5;
    nowa_lista->next = malloc(sizeof(struct element));
    nowa_lista->next->x = 12;
    nowa_lista->next->next = NULL;
    while(nowa_lista != NULL){
        printf("%d\n", nowa_lista->x);
        nowa_lista = nowa_lista->next;
    }
    return 0;
}
