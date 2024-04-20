#include <stdio.h>
#include <stdlib.h>

void rmLower(char text[]){
    int j = 0;
    for (int i = 0; text[i] != '\0'; i++){
        if (!(text[i] >= 'a' && text[i] <= 'z')){
            text[j] = text[i];
            j++;
        }
    }
    text[j] = '\0';
}

int main()
{
    char str[] = "HeLLo WoRlD";
    printf("Przed: %s\n", str);
    rmLower(str);
    printf("Po: %s\n", str);
    return 0;
}
