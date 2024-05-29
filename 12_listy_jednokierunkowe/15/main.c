#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sum(struct element *list){
    int result = 0;
    while (list != NULL){
        if(list->x % 2 != 0) result += list->x;
        list = list->next;
    }
    return result;
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = -1;
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -11;
    list->next->next->next->next = NULL;
    printf("%d\n", sum(list));
    return 0;
}
