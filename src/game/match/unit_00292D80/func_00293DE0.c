/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_weather.h"

void func_00293DE0(MatchWeather *weather, const WeatherOptions *options) {
    u8 month = options->month;
    if (!options->region) {
        if (!(month > 3 && month < 11)) {
            weather->seasonFlag = 1;
        } else {
            weather->seasonFlag = 0;
        }
    } else {
        if (month > 3 && month < 11) {
            if (D_005A2490[0].hemisphere <= 0) {
                weather->seasonFlag = 1;
            } else {
                weather->seasonFlag = 0;
            }
        } else {
            if (D_005A2490[0].hemisphere <= 0) {
                weather->seasonFlag = 0;
            } else {
                weather->seasonFlag = 1;
            }
        }
    }
}
