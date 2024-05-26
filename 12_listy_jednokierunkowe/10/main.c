#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *addFirst(struct element *list, int a){
    if(list->next == NULL){
        list->next = malloc(sizeof(struct element));
        list->next->x = a;
        list->next->next = NULL;
    } else {
        struct element *temp = malloc(sizeof(struct element));
        temp->next = malloc(sizeof(struct element));
        temp->next->x = a;
        temp->next->next = list->next;
        list = temp;
    }
    return list;
}

void printListWithHead(struct element *list){
    if(list == NULL || list->next == NULL) printf("Lista jest pusta\n");
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
    list = addFirst(list, 17);
    printf("Po:\n");
    printListWithHead(list);
    return 0;
}
