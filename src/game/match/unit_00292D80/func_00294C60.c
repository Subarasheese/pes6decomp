/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

static inline void setWeatherClimate(u8 annualTemp, u8 daily, u8 annualHumidity, s32 humidity,
                                     s8 hemisphere) {
    D_005A2490[0].annualTemp = annualTemp;
    D_005A2490[0].daily = daily;
    D_005A2490[0].annualHumidity = annualHumidity;
    D_005A2490[0].humidity = humidity;
    D_005A2490[0].hemisphere = hemisphere;
}
void func_00294C60(const WeatherOptions *options, const StadiumClimate *stadium) {
    D_005A2490[0].hour = (float)(options->time << 1);
    switch (stadium->values.kind) {
    case 0:
        setWeatherClimate(2, 6, 3, 70, -1);
        break;
    case 1:
        setWeatherClimate(3, 3, 15, 60, -1);
        break;
    case 2:
        setWeatherClimate(2, 3, 0, 50, 1);
        break;
    case 3:
        setWeatherClimate(9, 2, 12, 60, 1);
        break;
    case 4:
        setWeatherClimate(10, 5, 10, 60, 1);
        break;
    case 5:
        setWeatherClimate(8, 2, 3, 65, 1);
        break;
    case 6:
        setWeatherClimate(6, 2, 15, 55, 1);
        break;
    case 7:
        setWeatherClimate(7, 5, 5, 65, 1);
        break;
    case 8:
        setWeatherClimate(8, 5, 18, 65, 1);
        break;
    case 9:
        setWeatherClimate(8, 8, 13, 35, 1);
        break;
    case 10:
        setWeatherClimate(11, 4, 12, 60, -1);
        break;
    case 11:
        setWeatherClimate(4, 2, 5, 60, -1);
        break;
    case 12:
        setWeatherClimate(10, 2, 3, 65, -1);
        break;
    case 13:
        setWeatherClimate(6, 2, 15, 60, -1);
        break;
    case 14:
        setWeatherClimate(6, 10, 13, 34, -1);
        break;
    case 15:
        D_005A2490[0].annualTemp = 15;
        D_005A2490[0].daily = (s32)(weatherRandom() * 5.0f);
        D_005A2490[0].annualHumidity = 25;
        D_005A2490[0].humidity = 50;
        D_005A2490[0].hemisphere = 1;
        break;
    case 16:
        setWeatherClimate(13, 2, 12, 65, 1);
        break;
    case 17:
        setWeatherClimate(9, 2, 12, 55, 1);
        break;
    }
}
