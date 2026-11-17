/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
s32 func_001FAE00(s32 arg0) {
    s32 a;

    a = arg0;
    if ((u32) (a - 0x126) < 2U) {
        a = func_002371A0(a & 0xFFFF) & 0xFFFF;
        if ((a < 0x40) || (a >= 0xCC)) {
            goto chain;
        }
        return 1;
    }
chain:
    if (a == 0x110) {
        return 1;
    }
    if (a == 0x111 || a == 0xDD || a == 0x11E || a == 0x112 || a == 0x127 || a == 0x126) {
        return 1;
    }
    if (a >= 0xCC && a < 0xDD) {
        return 1;
    }
    if (a >= 0xFE && a < 0x10E) {
        return 1;
    }
    if (a >= 0xDD && a < 0xFE) {
        return 1;
    }
    if (a >= 0x10E && a < 0x110) {
        return 1;
    }
    if (a < 0xCC) {
        return 0;
    }
    return 1;
}
