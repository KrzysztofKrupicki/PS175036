#include <stdio.h>
#include <stdlib.h>

void rmDigits(char text[]){
    int j = 0;
    for (int i = 0; text[i] != '\0'; i++){
        if (!(text[i] >= '0' && text[i] <= '9')){
            text[j] = text[i];
            j++;
        }
    }
    text[j] = '\0';
}

int main()
{
    char str[] = "H3ll0 W0rld!";
    printf("Przed: %s\n", str);
    rmDigits(str);
    printf("Po: %s\n", str);
    return 0;
}
