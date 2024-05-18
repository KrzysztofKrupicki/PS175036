#include <stdio.h>
#include <stdlib.h>

enum Day{
    Poniedzialek,
    Wtorek,
    Sroda,
    Czwartek,
    Piatek,
    Sobota,
    Niedziela
};

const char *dayToString(enum Day day){
    switch(day){
        case Poniedzialek: return "Poniedzialek";
        case Wtorek: return "Wtorek";
        case Sroda: return "Sroda";
        case Czwartek: return "Czwartek";
        case Piatek: return "Piatek";
        case Sobota: return "Sobota";
        case Niedziela: return "Niedziela";
        default: return "Niepoprawny dzien";
    }
}

void print_days(enum Day day, int n){
    if (n <= 0) return;
    printf("%s\n", dayToString(day));
    enum Day nextDay = (day+1) % 7;
    print_days(nextDay, n-1);
}

int main()
{
    enum Day actualDay = Sobota;
    int n = 5;
    print_days(actualDay, n);
    return 0;
}
