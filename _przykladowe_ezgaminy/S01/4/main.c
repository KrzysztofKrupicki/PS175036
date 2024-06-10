#include <stdio.h>
#include <stdlib.h>

struct node{
    int i;
    struct node * next;
};

void zad4(struct node *list){
    struct node *temp = list;
    while(temp != NULL){
        int i = 0;
        while(i*i <= temp->i) {
            if(i*i == temp->i) printf("%d\n", temp->i);
            i++;
        }
        temp = temp->next;
    }
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->i = 4;
    list->next = malloc(sizeof(struct node));
    list->next->i = 5;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 6;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = -34;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->i = 0;
    list->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->i = 25;
    list->next->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->next->i = 11;
    list->next->next->next->next->next->next->next = NULL;
    zad4(list);
    return 0;
}
