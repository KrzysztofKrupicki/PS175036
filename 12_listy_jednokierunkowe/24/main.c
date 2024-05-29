#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removePrevLast(struct element *list){
    if(list->next == NULL || list->next->next == NULL) return list;
    struct element *prev = list;
    struct element *cur = list->next;
    struct element *next = cur->next;
    while(next->next != NULL){
        prev = cur;
        cur = next;
        next = next->next;
    }
    prev->next = next;
    return list;
}

void printListWithHead(struct element *list){
    if(list->next == NULL) printf("Lista jest pusta\n");
    else {
        while(list->next != NULL){
            list = list->next;
            printf("%d\n", list->x);
        }
    }
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    printf("Przed:\n");
    printListWithHead(list);
    list = removePrevLast(list);
    printf("Po:\n");
    printListWithHead(list);
    return 0;
}
