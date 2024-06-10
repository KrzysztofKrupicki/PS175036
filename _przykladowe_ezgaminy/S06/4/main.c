#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *next;
};

int zad4(struct node *list1, struct node *list2){
    struct node *temp1 = list1;
    struct node *temp2 = list2;
    while(temp1->next != NULL && temp2->next != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1->next == temp2->next) return 1;
    return 0;
}

int main()
{
    struct node *list1 = malloc(sizeof(struct node));
    list1->next = malloc(sizeof(struct node));
    list1->next->a = 3;
    list1->next->next = NULL;
    struct node *list2 = malloc(sizeof(struct node));
    list2->next = malloc(sizeof(struct node));
    list2->next->a = 3;
    list1->next->next = malloc(sizeof(struct node));
    list1->next->next->a = 5;
    list1->next->next->next = NULL;
    printf("%d\n", zad4(list1, list2));
    printf("%d\n", zad4(list1, list1));
    return 0;
}
