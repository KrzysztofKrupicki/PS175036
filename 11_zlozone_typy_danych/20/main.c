#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element *next;
};

int main()
{
    struct element el_1, el_2, el_3;
    el_1.i = 0;
    el_2.i = 1;
    el_3.i = 2;
    el_1.next = &el_2;
    el_2.next = &el_3;
    el_3.next = NULL;
    printf("%d\n", el_2.i);
    return 0;
}
