/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB62B0[];
extern char D_00CB62B8[];

s32 func_0099F3A0(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (arg0 & 0xFF) * 0x18;
    if (((*(s32 *)(D_00CB62B8 + temp_a0) & 0x100) == 0x100) && (arg1 == (arg1 & *(s32 *)(D_00CB62B0 + temp_a0)))) {
        return 1;
    }
    return 0;
}
