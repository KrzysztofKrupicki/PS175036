#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char text1[], char text2[]){
    for (int i= 0; text1[i] != '\0'; i++){
        if (text1[i] != text2[i]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[] = "komputer";
    char str2[] = "komput3r";
    printf("%d", cmpStrNew(str1, str2));
    return 0;
}
