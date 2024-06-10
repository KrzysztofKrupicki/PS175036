#include <stdio.h>
#include <stdlib.h>

struct node{
    int i;
    struct node *next;
};

void doubleLastItem(struct node *list){
    struct node *temp = list;
    while(temp != NULL){
        temp = temp->next;
        if(temp->next == NULL) break;
    }
    if(temp->next == NULL) temp->i = temp->i * 2;
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->i = 3;
    list->next = malloc(sizeof(struct node));
    list->next->i = 5;
    list->next->next = NULL;
    doubleLastItem(list);
    struct node *temp = list;
    while(temp != NULL){
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    return 0;
}
