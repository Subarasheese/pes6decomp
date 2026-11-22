/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern s32 func_0024EC90(s32);

u16 func_00824A60(s32 arg0, s32 arg1) {
    M2C_UNK var_s0;

    var_s0 = 0;
    if (func_0024EC90(arg0) == 3) {
        var_s0 = 1;
    }
    return Pes6Team_GetPlayerId(arg0, arg1, var_s0);
}
