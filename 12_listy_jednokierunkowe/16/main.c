#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sum(struct element *list){
    int result = 0;
    while (list->next != NULL){
        list = list->next;
        if(list->x < 0) result += list->x;
    }
    return result;
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = -4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -11;
    list->next->next->next->next = NULL;
    printf("%d\n", sum(list));
    return 0;
}
