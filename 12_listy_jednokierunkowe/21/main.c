#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removeLast(struct element *list){
    if(list == NULL) return NULL;
    if(list->next == NULL) return NULL;
    struct element *temp = list;
    while(temp->next->next != NULL) temp = temp->next;
    temp->next = NULL;
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
    list = removeLast(list);
    printf("Po:\n");
    printListWithoutHead(list);
    return 0;
}
