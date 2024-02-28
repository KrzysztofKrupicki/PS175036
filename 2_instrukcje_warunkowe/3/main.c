#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocena;
    printf("Podaj ocene: ");
    scanf("%d", &ocena);
    switch (ocena) {
        case 1:
            printf("niedostateczny");
            break;
        case 2:
            printf("dopuszczajacy");
            break;
        case 3:
            printf("dostateczny");
            break;
        case 4:
            printf("dobry");
            break;
        case 5:
            printf("bardzo dobry");
            break;
        default:
            printf("nieodpowiednia ocena");
            break;
    }
    return 0;
}
