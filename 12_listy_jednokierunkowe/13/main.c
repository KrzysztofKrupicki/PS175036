#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element *list, int a){
    while(list != NULL){
        if(list->x == a) return 1;
        list = list->next;
    }
    return 0;
};

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    printf("%d\n", find(list, 4));
    printf("%d\n", find(list, 1));
    return 0;
}
