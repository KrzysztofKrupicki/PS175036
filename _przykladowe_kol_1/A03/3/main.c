#include <stdio.h>
#include <stdlib.h>

float *init_block(){
    float *block = malloc(4*sizeof(float));
    *(block+0) = 0.5;
    *(block+1) = 1.5;
    *(block+2) = 2.5;
    *(block+3) = 3.5;
    return block;
}

int main()
{
    printf("%f\n", *init_block());
    for (int i=0; i<4; i++){
        printf("%f\n", *(init_block()+i));
    }
    return 0;
}
