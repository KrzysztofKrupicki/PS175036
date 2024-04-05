#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char text[]){
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] += 32;
        }
    }
}

int main()
{
    char str[] = "HeLLo WoRlD";
    printf("Przed: %s\n", str);
    toLowerNew(str);
    printf("Po: %s\n", str);
    return 0;
}
