/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005A2330[];

s32 func_00292BF0(void) {
    s32 var_v1;
    u8 *p;

    p = (u8 *)D_005A2330;
    if (p == NULL) {
        var_v1 = 0;
    } else {
        var_v1 = (p[1] >> 6) & 3;
    }
    if ((var_v1 != 3) && (var_v1 != 2) && (var_v1 != 1)) {
        return 0;
    }
    return 1;
}
