#include <stdio.h>
#include <stdlib.h>

struct Node{
    int x;
    struct Node *next;
};

int *initArray(struct Node *list){
    struct Node *temp = list->next;
    int dlugosc = 0;
    while(temp != NULL){
        dlugosc++;
        temp = temp->next;
    }
    if(dlugosc == 0) return NULL;
    temp = list->next;
    int *tab = malloc(sizeof(int)*dlugosc);
    for(int i=0; i<dlugosc; i++){
        *(tab+i) = temp->x;
        temp = temp->next;
    }
    return tab;
}

int main()
{
    struct Node *list = malloc(sizeof(struct Node));
    list->next = malloc(sizeof(struct Node));;
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct Node));;
    list->next->next->x = 4;
    list->next->next->next = NULL;
    int *tab = initArray(list);
    for(int i=0; i<2; i++) printf("%d\n", *(tab+i));
    return 0;
}
