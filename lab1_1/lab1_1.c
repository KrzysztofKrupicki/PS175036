#include <stdio.h>
#include <stdlib.h>

/* Zad 1 *
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", x);
    return 0;
}
/* */

/* Zad 2 *
int main()
{
    float x;
    float y;
    scanf("%f", &x);
    scanf("%f", &y);
    printf("%f", x-y);
    return 0;
}
/* */

/* Zad 3 *
int main()
{
    int x;
    printf("Podaj rok urodzenia: ");
    scanf("%d", &x);
    printf("%d", x - 1);
    return 0;
}
/* */

/* Zad 4 *
int main()
{
    int x, y, z;
    float avg, sum;
    printf("Podaj x: ");
    scanf("%d", &x);
    printf("Podaj y: ");
    scanf("%d", &y);
    printf("Podaj z: ");
    scanf("%d", &z);
    sum = x + y + z;
    avg = sum/3;
    printf("\nAvg: %f", avg);
    return 0;
}
/* */

/* Zad 5 *
int main()
{
    char x, y;
    printf("Podaj 2 litery: ");
    scanf("%c", &x);
    scanf("%c", &y);
    printf("%c%c", y, x);
    return 0;
}
/* */

/* Zad 6 *
int main()
{
    float x;
    printf("Podaj float: ");
    scanf("%f", &x);
    x = x * 2;
    printf("%f", x);
    return 0;
}
/* */

/* Zad 7 *
int main()
{
    float dolar;
    float euro;
    printf("Podaj dolary: ");
    scanf("%f", &dolar);
    euro = dolar * 0.85;
    printf("%0.2f", euro);
    return 0;
}
/* */

/* Zad 8, 9, 10 *
int main()
{
    printf("To jest cytat: \"Czesto uzywam jezyka C.\"\n");
    printf("C:\\Program Files\\MojaAplikacja\\\n");
    printf("C:\\\\Program Files\\\\MojaAplikacja\\\\\n");
    printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %% (procent), \\\\ (ukosnik wsteczny).");
    return 0;
}
/* */

/* Zad 11 *
int main()
{
    float a;
    printf("Podaj dlugosc a: ");
    scanf("%f", &a);
    float b;
    printf("Podaj dlugosc b: ");
    scanf("%f", &b);
    float c = pow((pow(a, 2) + pow(b, 2)), 0.5);
    printf("Dlugosc c: %f", c);
    return 0;
}
/* */

/* Zad 12 *
int main()
{
    int x;
    printf("Podaj x: ");
    scanf("%d", &x);
    x = abs(x);
    printf("Wartosc ebzwzgledna: %d", x);
    return 0;
}
/* */

/* Zad 13 *
int main()
{
    float x;
    printf("Podaj x: ");
    scanf("%f", &x);
    //x = fabs(x);
    //printf("Wartosc bezwzgledna: %f", x);
    if(x < 0) {
        x = x * -1;
    }
    printf("Wartosc bezwzgledna: %f", x);
    return 0;
}
/* */
