#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removePrevLast(struct element *list){
    if(list == NULL || list->next == NULL) return list;
    struct element *prev = NULL;
    struct element *cur = list;
    struct element *next = list->next;
    while(next->next != NULL){
        prev = cur;
        cur = next;
        next = next->next;
    }
    prev->next = next;
    return list;
}

void printListWithoutHead(struct element *list){
    if(list != NULL){
        while(list != NULL){
            printf("%d\n", list->x);
            list = list->next;
        }
    } else printf("Lista jest pusta\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    printf("Przed:\n");
    printListWithoutHead(list);
    list = removePrevLast(list);
    printf("Po:\n");
    printListWithoutHead(list);
    return 0;
}
