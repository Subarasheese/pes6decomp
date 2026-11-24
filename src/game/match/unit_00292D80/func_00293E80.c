/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"
extern f32 D_005A249C[];

void func_00293E80(MatchWeather *weather, const WeatherOptions *options,
                   const StadiumClimate *stadium) {
    f32 temperature;
    f32 humidity;
    u8 mode;
    u8 precipitation;

    mode = options->weather;

    humidity = weather->humidity;
    temperature = weather->temperature;
    if (mode == WEATHER_RANDOM) {
        if (humidity < 20.0f) {
            D_005A249C[0] = 0.55f;
        }
        if (!(humidity < 20.0f) && (humidity < 30.0f)) {
            D_005A249C[0] = 0.57f;
        }
        if (!(humidity < 30.0f) && (humidity < 40.0f)) {
            D_005A249C[0] = 0.6f;
        }
        if (!(humidity < 40.0f) && (humidity < 50.0f)) {
            D_005A249C[0] = 0.63f;
        }
        if (!(humidity < 50.0f) && (humidity < 60.0f)) {
            D_005A249C[0] = 0.66f;
        }
        if (!(humidity < 60.0f) && (humidity < 70.0f)) {
            D_005A249C[0] = 0.7f;
        }
        if (!(humidity < 70.0f) && (humidity < 80.0f)) {
            D_005A249C[0] = 0.76f;
        }
        if (!(humidity < 80.0f)) {
            D_005A249C[0] = 0.81f;
        }
        if (!(humidity < 90.0f)) {
            D_005A249C[0] = 127.0f;
        }
        if (stadium->values.precipitationType == 2) {
            D_005A249C[0] = 0.54f;
        }
        if (stadium->values.precipitationType == 3) {
            D_005A249C[0] = 0.74f;
        }
        if (stadium->values.precipitationType == 1) {
            D_005A249C[0] = 1.0f;
        }
        if (stadium->values.kind == 2) {
            D_005A249C[0] = 0.0f;
        }
        if ((D_005A249C[0] * weatherRandom()) < 0.5f) {
            if ((temperature < 5.0f) && (humidity < 40.0f)) {
                precipitation = WEATHER_SNOW;
            } else {
                precipitation = WEATHER_CLEAR;
            }
        } else if (!(temperature <= 2.0f)) {
            precipitation = WEATHER_RAIN;
        } else {
            precipitation = WEATHER_SNOW;
        }
        weather->precipitation = precipitation;
    } else {
        weather->precipitation = mode;
    }
}
