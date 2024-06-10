#include <stdio.h>
#include <stdlib.h>

struct elem{
    int t;
    struct elem *next;
};

int zad4(struct elem *list1, struct elem *list2){
    struct elem *temp1 = list1;
    struct elem *temp2 = list2;
    int licznik = 0;
    while(temp1->next != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
        if(temp1->t == temp2->t) licznik++;
    }
    return licznik;
}

int main()
{
    struct elem *list1 = malloc(sizeof(struct elem));
    list1->next = malloc(sizeof(struct elem));
    list1->next->t = 3;
    list1->next->next = malloc(sizeof(struct elem));
    list1->next->next->t = 4;
    list1->next->next->next = malloc(sizeof(struct elem));
    list1->next->next->next->t = 5;
    list1->next->next->next->next = malloc(sizeof(struct elem));
    list1->next->next->next->next->t = 6;
    list1->next->next->next->next->next = malloc(sizeof(struct elem));
    list1->next->next->next->next->next->t = 7;
    list1->next->next->next->next->next->next = malloc(sizeof(struct elem));
    list1->next->next->next->next->next->next->t = 8;
    list1->next->next->next->next->next->next->next = NULL;

    struct elem *list2 = malloc(sizeof(struct elem));
    list2->next = malloc(sizeof(struct elem));
    list2->next->t = 3;
    list2->next->next = malloc(sizeof(struct elem));
    list2->next->next->t = 2;
    list2->next->next->next = malloc(sizeof(struct elem));
    list2->next->next->next->t = 5;
    list2->next->next->next->next = malloc(sizeof(struct elem));
    list2->next->next->next->next->t = 11;
    list2->next->next->next->next->next = malloc(sizeof(struct elem));
    list2->next->next->next->next->next->t = 7;
    list2->next->next->next->next->next->next = malloc(sizeof(struct elem));
    list2->next->next->next->next->next->next->t = -7;
    list2->next->next->next->next->next->next->next = NULL;
    printf("%d\n", zad4(list1, list2));
    return 0;
}
