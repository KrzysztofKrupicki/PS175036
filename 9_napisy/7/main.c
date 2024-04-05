#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char text[]){
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] -= 32;
        }
    }
}

int main()
{
    char str[] = "HeLLo WoRlD";
    printf("Przed: %s\n", str);
    toUpperNew(str);
    printf("Po: %s\n", str);
    return 0;
}
