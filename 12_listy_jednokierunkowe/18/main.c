#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *ostatniDodatni(struct element *list){
    struct element *result = NULL;
    while (list->next != NULL){
        list = list->next;
        if(list->x > 0) result = list;
    }
    return result;
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 6;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    printf("%p\n", ostatniDodatni(list));

    struct element *list2 = malloc(sizeof(struct element));
    list2->next = NULL;
    printf("%p\n", ostatniDodatni(list2));
    return 0;
}
