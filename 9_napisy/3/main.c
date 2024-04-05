#include <stdio.h>
#include <stdlib.h>

int countVow(char text[]){
    char vow[] = "aAeEiIoOuUyY";
    int counter = 0;
    for (int i= 0; text[i] != '\0'; i++){
        for (int j = 0; vow[j] != '\0'; j++){
            if (text[i] == vow[j]) {
                counter++;
                break;
            }
        }
    }
    return counter;
}
int main()
{
    char str[] = "komputer";
    printf("%d", countVow(str));
    return 0;
}
