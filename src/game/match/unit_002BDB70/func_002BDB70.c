/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
extern s32 func_00292AA0(void);
extern s32 func_002BDC30(s32, s32, s32, s32);
s32 func_002BDB70(s32 home, s32 away, s32 previousHome, s32 previousAway) {
    s32 awayTotal;
    s32 homeTotal;
    s32 result;
    if (func_00292AA0() != 0) {
        return func_002BDC30(home, away, previousHome, previousAway);
    }
    homeTotal = home + previousHome;
    awayTotal = away + previousAway;
    if (homeTotal > awayTotal) {
        result = 0;
    } else if (homeTotal < awayTotal) {
        result = 1;
    } else {
        result = 2;
    }
    return result;
}
