/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

void func_002941E0(MatchWeather *weather, const WeatherOptions *options,
                   const StadiumClimate *stadium) {
    f32 angle;
    if (stadium->values.kind == 2) {
        weather->strength = 0;
    } else if (stadium->values.windType == 4) {
        weather->strength =
            (u8)(3.f + 1000.f * (18.f * weatherRandom()) / (f32)(u32)weather->airPressure);
    } else {
        weather->strength =
            (u8)(1000.f * (18.f * weatherRandom()) / (f32)(u32)weather->airPressure);
    }
    angle = WEATHER_FULL_TURN * weatherRandom();
    if (stadium->values.windType == 3)
        angle = weatherRandom();
    /* The PAL routine tests windType again inside this branch. */
    if (stadium->values.windType == 1) {
        if (stadium->values.windType == 4 || stadium->values.windType == 11) {
            angle = 3.1415927f + 0.7f * weatherRandom();
        }
        if (stadium->values.windType == 5 || stadium->values.windType == 12) {
            if (options->month > 11 || options->month < 3)
                angle = 3.1415927f + 0.7f * weatherRandom();
        }
    }
    if (stadium->values.windType == 2) {
        s32 month = options->month;
        if (month > 3 && month < 10)
            angle = 0.7f * weatherRandom();
        else
            angle = 3.1415927f + 0.7f * weatherRandom();
    }
    weather->windX = func_0011D468(angle);
    weather->windZ = func_0011D468(WEATHER_QUARTER_TURN + angle);
}
