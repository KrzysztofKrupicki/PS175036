#include <stdio.h>
#include <stdlib.h>

struct WeatherInfo{
    float temperature;
    float humidity;
    float windSpeed;
};

int main()
{
    struct WeatherInfo day1 = {23.4, 12.5, 6};
    struct WeatherInfo day2 = {16.8, 75.1, 34};
    return 0;
}
