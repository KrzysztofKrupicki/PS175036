#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element *next;
};

int zad4(struct element *list1, struct element *list2){
    struct element *temp1 = list1;
    struct element *temp2 = list2;
    while(temp1->next != NULL && temp2->next != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1->next == NULL && temp2->next == NULL) return 1;
    return 0;
}

int main()
{
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = malloc(sizeof(struct element));
    list1->next->i = 3;
    list1->next->next = malloc(sizeof(struct element));
    list1->next->next->i = 3;
    list1->next->next->next = malloc(sizeof(struct element));
    list1->next->next->next->i = 3;
    list1->next->next->next->next = NULL;

    struct element *list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->i = 3;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->i = 3;
    list2->next->next->next = NULL;
    printf("%d\n", zad4(list1, list2));
    printf("%d\n", zad4(list1, list1));
    return 0;
}
