#include <stdio.h>
#include <stdlib.h>

struct elem {
    int x;
    struct elem *next;
};

void printNegative(struct elem *list){
    while(list->next != NULL){
        list = list->next;
        if(list->x < 0) printf("%d\n", list->x);
    }
}

int main()
{
    struct elem *list = malloc(sizeof(struct elem));
    list->next = malloc(sizeof(struct elem));
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->x = -8;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->x = 12;
    list->next->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->next->x = -4;
    list->next->next->next->next->next = NULL;
    printNegative(list);
    return 0;
}
