#include <stdio.h>
#include <stdlib.h>

int countNums(char text[]){
    int counter = 0;
    for (int i=0; text[i] != '\0'; i++){
        if (text[i] >= '0' && text[i] <= '9'){
            counter++;
        }
    }
    return counter;
}
int main()
{
    char str[] = "k0mput3r";
    printf("%d", countNums(str));
    return 0;
}
