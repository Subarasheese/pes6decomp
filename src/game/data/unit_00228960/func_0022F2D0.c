/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003A9A40[];
s32 func_00220B70(s32);
s32 func_001F08B0(s32);

s32 func_0022F2D0(s32 id) {
    s32 value;

    if (id >= 0x3B) {
        value = D_003A9A40[0];
    } else {
        value = D_003A9A40[id];
    }
    if (value < 0x1D) {
        return func_00220B70(value);
    }
    return func_001F08B0(value);
}
