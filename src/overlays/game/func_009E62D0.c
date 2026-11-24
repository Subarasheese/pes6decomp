/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_00CBBDFD[];
s32 func_009E62D0(s16 home, s16 away) {
    u8 kick = D_00CBBDFD[0];
    switch (kick) {
    case 8:
        if (away > home)
            return 1;
        /* The earlier kick thresholds also apply here. */
    case 7:
        if ((home - away > 0 ? home - away : -(home - away)) >= 2)
            return 1;
        /* Fall through. */
    case 6:
        if (away - home >= 2)
            return 1;
        /* Fall through. */
    case 5:
        if ((home - away > 0 ? home - away : -(home - away)) >= 3)
            return 1;
        break;
    default:
        if (kick < 5)
            return 0;
        return (u8)(((kick & 1) == 1) && (home != away));
    }
    return 0;
}
