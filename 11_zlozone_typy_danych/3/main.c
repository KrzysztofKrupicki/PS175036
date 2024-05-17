#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char *color;
};

int main()
{
    struct Rectangle tabR[4] = {
        {10.0, 5.0, "red"},
        {7.0, 8.0, "blue"},
        {12.0, 9.0, "green"},
        {17.0, 17.0, "yellow"}
    };
    printf("%lf %lf %s", tabR[0].width, tabR[0].height, tabR[0].color);
    return 0;
}
