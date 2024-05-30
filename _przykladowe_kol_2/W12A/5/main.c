#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element *next;
};

void printLowerThan0(struct element *list){
    while(list->next != NULL){
        list = list->next;
        if(list->x < 0) printf("%d\n", list->x);
    }
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 12;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -4;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -2;
    list->next->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->next->x = 6;
    list->next->next->next->next->next = NULL;
    printLowerThan0(list);
    return 0;
}
