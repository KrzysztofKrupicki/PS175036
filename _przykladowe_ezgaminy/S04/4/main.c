#include <stdio.h>
#include <stdlib.h>

struct node{
    float value;
    struct node *next;
};

float zad4(struct node *list){
    float maks = 0;
    struct node *temp = list;
    while(temp->next != NULL){
        if(temp->value > maks) maks = temp->value;
        temp = temp->next;
    }
    return maks;
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    struct node *list2 = malloc(sizeof(struct node));
    list2->next = NULL;
    list->next = malloc(sizeof(struct node));
    list->next->value = 2.14;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->value = 4.14;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->value = 1.14;
    list->next->next->next->next = NULL;
    printf("%lf\n", zad4(list));
    printf("%lf\n", zad4(list2));
    return 0;
}
