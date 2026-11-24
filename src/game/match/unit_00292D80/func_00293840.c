/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

s32 func_00293840(MatchWeather *weather, const WeatherOptions *options) {
    StadiumClimate stadium;
    const StadiumClimate *source;
    func_00351F30(options->stadium);
    source = func_00351F20();
    /* A loaded stadium supplies the eight-byte climate record. */
    if (source) {
        stadium = *source;
    }
    D_003E9CD0 = options->seed;
    func_00294C60(options, &stadium);
    func_00294A40(weather, options, &stadium);
    func_00294720(weather, options);
    weather->airPressure = 1000 - (50 * stadium.values.altitude) / 10;
    func_002941E0(weather, options, &stadium);
    func_00293E80(weather, options, &stadium);
    func_00293DE0(weather, options);
    func_00293960(weather, options, &stadium);
    return 1;
}
