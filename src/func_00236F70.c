/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00231240(void);
u8 *func_00234C90(s32, s32, s32);

u8 func_00236F70(s32 a, s32 b, s32 c) {
    u8 v;

    if (func_00231240() == 1) {
        return 0;
    }
    v = *func_00234C90(a, b, c);
    if (v >= 99) {
        v = 99;
    }
    return v;
}
