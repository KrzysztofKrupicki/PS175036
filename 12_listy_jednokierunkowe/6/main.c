#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element *list){
    if(list == NULL || list->next == NULL) printf("Lista jest pusta\n");
    else {
        while(list->next != NULL){
            list = list->next;
            if (list->x % 2 != 0) printf("%d\n", list->x);
        }
    }
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 12;
    list->next->next->next->next = NULL;
    printOdd(list);
    return 0;
}

