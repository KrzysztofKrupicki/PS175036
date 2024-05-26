#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printPos(struct element *list){
    if(list != NULL){
        while(list != NULL){
            if(list->x > 0) printf("%d\n", list->x);
            list = list->next;
        }
    } else printf("Lista jest pusta\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = -5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 12;
    list->next->next->next = NULL;
    printPos(list);
    return 0;
}
