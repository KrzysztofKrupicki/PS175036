#include <stdio.h>
#include <stdlib.h>

struct Node{
    int x;
    struct Node *next;
};

void printLess(struct Node *list, int a){
    while(list->next != NULL){
        list = list->next;
        if(list->x < a) printf("%d\n", list->x);
    }
}

int main()
{
    struct Node *list = malloc(sizeof(struct Node));
    list->next = malloc(sizeof(struct Node));
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct Node));
    list->next->next->x = -4;
    list->next->next->next = malloc(sizeof(struct Node));
    list->next->next->next->x = 7;
    list->next->next->next->next = malloc(sizeof(struct Node));
    list->next->next->next->next->x = 12;
    list->next->next->next->next->next = malloc(sizeof(struct Node));
    list->next->next->next->next->next->x = 9;
    list->next->next->next->next->next->next = NULL;
    printLess(list, 5);
    return 0;
}
