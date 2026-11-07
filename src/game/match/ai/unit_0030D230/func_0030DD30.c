/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C17E10(u8, s32);
s32 func_00C17CF0(u8, u8);

s16 func_0030DD30(s32 team, u8 slot) {
    u8 r = func_00C17E10((u8)team, slot);

    if (r == 0xFF) {
        return 0;
    }
    return func_00C17CF0((u8)team, r);
}
