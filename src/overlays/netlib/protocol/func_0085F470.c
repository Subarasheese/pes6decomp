/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_002DE610(s32, s32, s32);
extern s32 func_002DE7A0(s32, s32, s32, s32 *, s32);

s32 func_0085F470(s8 *arg0) {
    s32 localValue1;

    if (func_002DE610(M2C_FIELD(arg0, s32 *, 0), (s32)(arg0 + 4), 0x10) == 0) {
        localValue1 = 1;
        func_002DE7A0(M2C_FIELD(arg0, s32 *, 0), 6, 1, &localValue1, 4);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        return 0;
    }
    return -0x66;
}
