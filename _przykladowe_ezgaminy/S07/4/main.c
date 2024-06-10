#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *next;
};

struct node *zad4(struct node *list, int a, int b){
    struct node *temp = malloc(sizeof(struct node));
    temp->a = a;
    temp->next = malloc(sizeof(struct node));
    temp->next->a = b;
    temp->next->next = list;
    return temp;
}


int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->a = 5;
    list->next = malloc(sizeof(struct node));
    list->next->a = 4;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 3;
    list->next->next->next = NULL;

    struct node *temp = list;
    printf("przed %p\n", &list);
    while(temp != NULL){
        printf("%d\n", temp->a);
        temp = temp->next;
    }
    list = zad4(list, 2, 1);
    printf("po %p\n", &list);
    temp = list;
    while(temp != NULL){
        printf("%d\n", temp->a);
        temp = temp->next;
    }
    return 0;
}
