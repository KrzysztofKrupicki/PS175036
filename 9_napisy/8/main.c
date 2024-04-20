#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char text1[], char text2[]){
    for (int i=0; text1[i] != '\0'; i++){
        text2[i] = text1[i];
    }
    text[i] = '\0';
}

int main()
{
    char str1[] = "Hello";
    char str2[25] = "";
    printf("%s %s\n", str1, str2);
    strCopyNew(str1, str2);
    printf("%s %s\n", str1, str2);
    return 0;
}
