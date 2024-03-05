#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x1, x2;
    printf("Podaj liczbe zmiennoprzecinkowa a: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("Funkcja liniowa - a = 0");
        return 0;
    }
    printf("Podaj liczbe zmiennoprzecinkowa b: ");
    scanf("%f", &b);
    printf("Podaj liczbe zmiennoprzecinkowa c: ");
    scanf("%f", &c);
    float delta = (b*b)-(4*a*c);
    if (delta > 0){
        x1 = (-b-sqrt(delta)) / (2*a);
        x2 = (-b+sqrt(delta)) / (2*a);
        printf("Rozwiazania x1 = %f, x2 = %f", x1, x2);
    }
    if (delta == 0){
        x1 = (-b)/(2*a);
        printf("Rozwiazanie x = %f", x1);
    }
    if (delta < 0){
        printf("Brak rozwiazan rzeczywistych");
    }
    return 0;
}
