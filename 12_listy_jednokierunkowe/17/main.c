#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *ostatniParzysty(struct element *list){
    struct element *result = NULL;
    while (list != NULL){
        if(list->x % 2 == 0) result = list;
        list = list->next;
    }
    return result;
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 6;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    printf("%p\n", ostatniParzysty(list));

    struct element *list2 = malloc(sizeof(struct element));
    list2->x = 7;
    list2->next = NULL;
    printf("%p\n", ostatniParzysty(list2));
    return 0;
}
