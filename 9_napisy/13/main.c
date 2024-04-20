#include <stdio.h>
#include <stdlib.h>

void cutStr(char text[], int n, int m){
    int i,j, len=0;
    while (text[len] != '\0') len++;
    if (n < 0) n = 0;
    if (n >= len) return;
    if (m >= len) m = len -1;
    for (i = n, j = m + 1; text[j] != '\0'; i++, j++){
        text[i] = text[j];
    }
    text[i] = '\0';
}

int main()
{
    char str[] = "Przypadek testowy!";
    cutStr(str, 3, 6);
    printf("%s\n", str); //Przek testowy!
    char str2[] = "Przypadek testowy!";
    cutStr(str2, 19, 25);
    printf("%s\n", str2); // Przypadek testowy!
    return 0;
}
