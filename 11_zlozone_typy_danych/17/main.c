#include <stdio.h>
#include <stdlib.h>

enum Month{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int days_in_month(enum Month miesiac){
    switch(miesiac){
        case January: return 31;
        case February: return 28;
        case March: return 31;
        case April: return 30;
        case May: return 31;
        case June: return 30;
        case July: return 31;
        case August: return 31;
        case September: return 30;
        case October: return 31;
        case November: return 30;
        case December: return 31;
        default: exit(-1);
    }
}

int main()
{
    enum Month maj = {May};
    printf("%d\n", days_in_month(maj));
    return 0;
}
