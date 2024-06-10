#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Telefon{
    char marka[15];
    int liczbaPolaczen;
};

struct Telefon *initTelefon(char *marka, int liczbaPolaczen){
    int dlugosc = 0;
    while(marka[dlugosc] != '\0') dlugosc++;
    if(dlugosc <3 || liczbaPolaczen <= 50) return NULL;

    struct Telefon *nowyTelefon = malloc(sizeof(struct Telefon));
    strcpy(nowyTelefon->marka, marka);
    nowyTelefon->liczbaPolaczen = liczbaPolaczen;
    return nowyTelefon;
};

void zwiekszLiczbePolaczen(struct Telefon *telefon){
    telefon->liczbaPolaczen = telefon->liczbaPolaczen + 10;
}

int main()
{
    struct Telefon *result = initTelefon("Samsung", 53);
    if(result == NULL) printf("Nie utworzono telefonu.");
    else {
        printf("%s %d\n", result->marka, result->liczbaPolaczen);
        zwiekszLiczbePolaczen(result);
        printf("%s %d\n", result->marka, result->liczbaPolaczen);
    }
    return 0;
}
