#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Telefon{
    char marka[30];
    int iloscPolaczen;
};

struct Telefon initTelefon(char marka[], int iloscPolaczen){
    struct Telefon nowyTelefon;
    int dlugosc = 0;
    while(marka[dlugosc] != '\0') dlugosc++;
    if(dlugosc > 3 && iloscPolaczen > 50){
        strcpy(nowyTelefon.marka, marka);
        nowyTelefon.iloscPolaczen = iloscPolaczen;
        return nowyTelefon;
    }
    strcpy(nowyTelefon.marka, "NIEZNANY");
    nowyTelefon.iloscPolaczen = 100;
    return nowyTelefon;
};

int main()
{
    struct Telefon result = initTelefon("Samsung", 53);
    struct Telefon result2 = initTelefon("Sa", 53);
    struct Telefon result3 = initTelefon("Samsung", 3);
    printf("%s %d\n", result.marka, result.iloscPolaczen);
    printf("%s %d\n", result2.marka, result2.iloscPolaczen);
    printf("%s %d\n", result3.marka, result3.iloscPolaczen);
    return 0;
}
