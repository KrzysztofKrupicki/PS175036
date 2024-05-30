#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element *next;
};

void printLessThan5(struct element *list){
    while(list != NULL){
        if(list->x < 5) printf("%d\n", list->x);
        list = list->next;
    }
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 7;
    list->next = malloc(sizeof(struct element));
    list->next->x = -2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 13;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 4;
    list->next->next->next->next = NULL;
    printLessThan5(list);
    return 0;
}
