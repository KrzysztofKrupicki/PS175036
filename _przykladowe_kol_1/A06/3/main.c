#include <stdio.h>
#include <stdlib.h>

int *init_block_int(){
    int *block_int = malloc(4*sizeof(int));
    *(block_int+0) = 1;
    *(block_int+1) = 2;
    *(block_int+2) = 3;
    *(block_int+3) = 4;
    return block_int+3;
}

int main()
{
    int *result = init_block_int();
    printf("%d\n", *result);
    for (int i=0; i<4; i++){
        printf("%d\n", *(result-3+i));
    }
    return 0;
}
