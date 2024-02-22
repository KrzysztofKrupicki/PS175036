#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 143;
    printf("1. Dziesietny: %d\n", x);
    printf("2. Szesnastkowy maly: %x\n", x);
    printf("3. Szesnastkowy duzy: %X\n", x);
    printf("4. Osemkowy: %o\n", x);
    printf("5. Wiodace zera: %8.d\n", x);
    printf("6. Wyrownanie do prawej: %10d txt\n", x);
    printf("7. Wyrownanie do lewej: %-10d txt\n", x);
    printf("8. Ze znakiem plusa: %+d\n", x);
    printf("9. Notacja naukowa: %e\n", (float)x);
    printf("10. Separator dziesietny: %.3f\n", (float)x);
    printf("11. Separator dziesietny: %.2f\n", 123.456789);
    printf("12. 10 znakow przed przecinkiem: %16.5f\n", -9876.54321);
    printf("13. Notacja naukowa 4 po przecinku: %.4e\n", 0.000789);
    printf("14. Notacja naukowa 1 po przecinku: %.1e\n", 12345.6789);
    printf("15. Z plusem 3 po przecinku: %+.3f\n", 3.14159);
    printf("16. Ze znakiem 5 po przecinku: %+.5f\n", 123456.789);
    printf("17. Ze znakiem 6 po przecinku: %-.6f\n", -0.0025);
    printf("18. Notacja naukowa 2 po przecinku i plus: %+.2e\n", 0.00123456789);
    printf("19. Notacja naukowa 3 po przecinku: %.3e\n", 9999999.99999);
    printf("20. Notacja naukowa 3 po przecinku: %12.3f\n", -123.456);
    return 0;
}
