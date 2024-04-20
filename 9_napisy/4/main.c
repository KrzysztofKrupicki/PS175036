#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char text1[], char text2[]){
    int i;
    for (i= 0; text1[i] != '\0' && text2[i] != '\0' ; i++){
        if (text1[i] != text2[i]) return 0;
    }
    if (text1[i] == '\0' && text2[i] == '\0') return 1;
    else return 0;
}
int main()
{
    char str1[] = "komputer";
    char str2[] = "kompute";
    char str3[] = "komput3r";
    char str4[] = "komputerr";
    printf("%d\n", cmpStrNew(str1, str1)); // 1
    printf("%d\n", cmpStrNew(str1, str2)); // 0
    printf("%d\n", cmpStrNew(str1, str3)); // 0
    printf("%d\n", cmpStrNew(str1, str4)); // 0
    printf("%d\n", cmpStrNew(str2, str1)); // 0
    return 0;
}
