#include <stdio.h>
#include <stdlib.h>

enum Day{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

char *dayToString(enum Day day){
    switch(day){
        case MON: return "Poniedzialek";
        case TUE: return "Wtorek";
        case WED: return "Sroda";
        case THU: return "Czwartek";
        case FRI: return "Piatek";
        case SAT: return "Sobota";
        case SUN: return "Niedziela";
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
    print_days(TUE, 8);
    return 0;
}
