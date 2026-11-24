/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

void func_00294720(MatchWeather *weather, const WeatherOptions *options) {
    s8 month = (s8)options->month - 2;
    f32 base, annual, daily;
    if (month <= 0)
        month = (s8)(month + 12);
    base = (f32)D_005A2490[0].humidity;
    annual = (f32)D_005A2490[0].annualHumidity;
    daily = (f32)D_005A2490[0].daily;
    if (options->weather == WEATHER_RANDOM || options->weather == WEATHER_CLEAR) {
        if (D_005A2490[0].hemisphere > 0 || !options->region) {
            base += (annual *
                     func_0011D468(WEATHER_QUARTER_TURN + (WEATHER_FULL_TURN * (f32)month) / 12.f));
        } else {
            base += (annual *
                     func_0011D468((WEATHER_FULL_TURN * (f32)month) / 12.f - WEATHER_QUARTER_TURN));
        }
        base = base * (1.f + 0.1f * weatherRandom());
        base = base + daily * func_0011D468((WEATHER_FULL_TURN * D_005A2490[0].hour) / 24.f -
                                            WEATHER_QUARTER_TURN);
        base = base + 3.f * weatherRandom();
    } else if ((u32)(options->weather - 1) < 2) {
        base = 75.f + 18.f * weatherRandom();
    }
    weather->humidity = base;
}
