#include <stdio.h>
#include <stdlib.h>

void strNcopy(char nap1[], char nap2[], unsigned int n){
    int i;
    for (i = 0; i < n && nap1[i] != '\0'; i++) {
        nap2[i] = nap1[i];
    }
    nap2[i] = '\0';
}

int main()
{
    char str1[] = "Lorem ipsum";
    char str2[32];
    int n = 4;
    printf("str1: %s\n", str1);
    strNcopy(str1, str2, n);
    printf("n = %d\nstr2: %s\n", n, str2);
    strNcopy(str1, str2, n+10);
    printf("n = %d\nstr2: %s\n", n+10, str2);
    return 0;
}
