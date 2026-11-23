/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
extern s16 func_002928B0(s32);
extern s32 func_00292A30(void);
s32 func_002BDC30(s32 home, s32 away, s32 previousHome, s32 previousAway) {
    s32 result, awayTotal, homeTotal, currentAway, currentHome;
    currentHome = func_002928B0(0);
    currentAway = func_002928B0(1);
    home += previousHome;
    away += previousAway;
    homeTotal = currentHome + home;
    awayTotal = currentAway + away;
    if (func_00292A30() && homeTotal == awayTotal) {
        homeTotal = home + 2 * currentHome;
        awayTotal = currentAway + 2 * away;
    }
    if (homeTotal > awayTotal) {
        result = 0;
    } else if (homeTotal < awayTotal) {
        result = 1;
    } else {
        result = 2;
    }
    return result;
}
