#include <stdio.h>
#include <stdlib.h>

void strConcat(char nap1[], char nap2[], char nap3[]){
    int i;
    for (i=0; nap1[i] != '\0'; i++){
        nap3[i] = nap1[i];
    }
    for (int j=0; nap2[j] != '\0'; j++){
        nap3[i] = nap2[j];
        i++;
    }
    nap3[i] = '\0';
}

int main()
{
    char str1[] = "Hello ";
    char str2[] = "World!";
    char str3[32];
    strConcat(str1, str2, str3);
    printf("%s + %s = %s", str1, str2, str3);
    return 0;
}
