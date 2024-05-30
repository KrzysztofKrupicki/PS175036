#include <stdio.h>
#include <stdlib.h>

struct elem {
    int x;
    struct elem *next;
};

void printDiv8AndNotDiv4(struct elem *list){
    while(list != NULL){
        if(list->x % 8 == 0 && list->x % 4 != 0) printf("%d\n", list->x);
        list = list->next;
    }
}

int main()
{
    struct elem *list = malloc(sizeof(struct elem));
    list->x = 4;
    list->next = malloc(sizeof(struct elem));
    list->next->x = 8;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->x = 1;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->x = 4;
    list->next->next->next->next = NULL;
    printDiv8AndNotDiv4(list); // nie ma takich liczb, liczby podzielne przez 8 sa podzielne przez 4, wiec sie eliminuja
    return 0;
}
