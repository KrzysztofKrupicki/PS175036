#include <stdio.h>
#include <stdlib.h>

void cutStr(char text[], int n, int m){
    int i;
    for (i = 0; i<n && text[i] != '\0'; i++){
        text[i] = text[i];
        printf("Przed: %s\n", text);
    }
    printf("Przed: %s\n", text);
    for (int j = m; text[j] != '\0'; j++){
        text[i] = text[j];
        i++;
    }
    text[i] = '\0';
}

int main()
{
    char str[] = "Hell0 World!";
    printf("Przed: %s\n", str);
    cutStr(str, 3, 6);
    printf("Po: %s\n", str);
    return 0;
}
