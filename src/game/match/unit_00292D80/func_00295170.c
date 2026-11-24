/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

s32 func_00295170(WeatherOptions *options, StadiumWeatherInput *input, const u8 *region) {
    u8 extra = *region;
    u8 seed = (3 * (s32)input->seed) % 255;
    D_003E9CD0 = seed;
    if (255.f * weatherRandom() > (f32)(u32)input->chance)
        input->weather = WEATHER_RANDOM;
    D_003E9CD0 = 0;
    options->stadium = input->stadium;
    options->weather = input->weather;
    options->month = input->month;
    options->time = (u32)input->time >> 1;
    options->seed = input->seed;
    options->region = extra;
    options->variation = input->variation;
    return 1;
}
