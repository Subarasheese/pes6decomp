/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

s32 func_00292D80(s32);
extern char D_003D1600[];
extern char D_003D1604[];

s32 func_001B97C0(s32 arg0) {
    s32 var_s0;
    u32 a0;

    var_s0 = 7;
    a0 = func_00292D80(arg0 & 0xFF) & 0xFF;
    if (a0 < 0x11U) {
        if (a0 == *(s32 *)(D_003D1600 + a0 * 8)) {
            var_s0 = *(s32 *)(D_003D1604 + a0 * 8);
        }
    }
    return var_s0;
}
