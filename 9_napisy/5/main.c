#include <stdio.h>
#include <stdlib.h>

int lexComp(char text1[], char text2[]){
    int i;
    for (i= 0; text1[i] != '\0' && text2[i] != '\0'; i++){
        if (text1[i] < text2[i]) {
            return 1;
        }
        if (text1[i] > text2[i]) {
            return 0;
        }
    }
    if (text1[i] == '\0' && text2[i] == '\0'){
        return 0;
    }
    if (text1[i] == '\0'){
        return 1;
    }
    return 0;
}
int main()
{
    printf("%d\n", lexComp("ABC", "XYZ"));
    printf("%d\n", lexComp("XYZ", "ABC"));
    printf("%d\n", lexComp("ABC", "ABD"));
    printf("%d\n", lexComp("ABD", "ABC"));
    printf("%d\n", lexComp("AB", "ABC"));
    printf("%d\n", lexComp("ABC", "AB"));
    return 0;
}
