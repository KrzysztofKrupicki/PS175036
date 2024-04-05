#include <stdio.h>
#include <stdlib.h>

int length(char *text){
    int counter = 0;
    for (int i=0; text[i] != '\0'; i++){
        counter ++;
    }
    return counter;
}

int length2(char *text){
    int counter = 0;
    while (text[counter] != '\0'){
        counter++;
    }
    return counter;
}


int main()
{
    char str[] = "komputer";
    printf("%d", length(str));
    printf("\n%d", length2(str));
    return 0;
}
