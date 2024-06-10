#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node *next;
};

void zad4(struct node *list){
    struct node *temp = list;
    struct node *temp2 = list;
    double avg = 0;
    int ilosc = 0;
    while(temp != NULL){
        ilosc++;
        avg += temp->a;
        temp = temp->next;
    }
    avg = avg/ilosc;
    while(temp2 != NULL){
        if(temp2->a > avg) printf("%d\n", temp2->a);
        temp2 = temp2->next;
    }
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->a = 4;
    list->next = malloc(sizeof(struct node));
    list->next->a = 8;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 3;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->a = 7;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->a = 1;
    list->next->next->next->next->next = NULL;
    zad4(list);
    return 0;
}
