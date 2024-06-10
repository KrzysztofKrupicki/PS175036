#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node *next;
};

void zad4(struct node *list){
    struct node *temp1 = list;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    struct node *temp2 = list;
    while(temp2->next != NULL){
        temp2 = temp2->next;
        if(temp2->a > 0) temp2->a = temp1->a;
    }
}

void printList(struct node *list){
    printf("---\n");
    struct node *temp = list;
    while(temp->next != NULL){
        temp = temp->next;
        printf("%d\n", temp->a);
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));
    list->next->a = 3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 4;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->a = -5;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->a = 3;
    list->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->a = 6;
    list->next->next->next->next->next->next = NULL;
    printList(list);
    zad4(list);
    printList(list);
    return 0;
}
