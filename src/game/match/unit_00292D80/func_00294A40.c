/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

void func_00294A40(MatchWeather *weather, const WeatherOptions *options,
                   const StadiumClimate *stadium) {
    s8 month = (s8)options->month - 2;
    f32 base, annual, daily;
    if (month <= 0)
        month = (s8)(month + 12);
    daily = (f32)D_005A2490[0].daily;
    annual = (f32)D_005A2490[0].annualTemp;
    base = (f32)stadium->values.temperature;
    base /= 100.f;
    if (D_005A2490[0].hemisphere > 0 || !options->region) {
        base += (annual *
                 func_0011D468((WEATHER_FULL_TURN * (f32)month) / 12.f - WEATHER_QUARTER_TURN));
    } else {
        base += (annual *
                 func_0011D468(WEATHER_QUARTER_TURN + (WEATHER_FULL_TURN * (f32)month) / 12.f));
    }
    base = base + daily * func_0011D468((WEATHER_FULL_TURN * D_005A2490[0].hour) / 24.f -
                                        WEATHER_QUARTER_TURN);
    weather->temperature = base + 2.f * weatherRandom();
}
