/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
s32 func_001FAE00(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if ((u32) (var_a0 - 0x126) < 2U) {
        var_a0 = func_002371A0(var_a0 & 0xFFFF) & 0xFFFF;
        if ((var_a0 >= 0x40) && (var_a0 < 0xCC)) {
            goto block_28;
        }
    }
    switch (var_a0) {                               /* irregular */
    case 0x111:
    case 0xDD:
    case 0x11E:
    case 0x112:
    case 0x127:
    case 0x126:
        return 1;
    case 0x110:
block_28:
        return 1;
    default:
        return 0;
    }
}
