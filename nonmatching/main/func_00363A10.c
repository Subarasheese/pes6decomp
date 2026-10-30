/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC240(void);
s32 func_00363A10(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = arg1 & 0xFFFF;
    var_s0 = 0x18;
    switch (temp_v0) {                              /* irregular */
    case 0x13:
        var_s0 = 0xE;
        break;
    case 0x57:
        var_s0 = 0xC;
        break;
    case 0x41:
        var_s0 = 0xB;
        break;
    case 0x43:
        var_s0 = 0xA;
        break;
    case 0x5A:
        var_s0 = 9;
        break;
    case 0x22:
        var_s0 = 8;
        break;
    case 0x21:
        var_s0 = 7;
        break;
    case 0x58:
        var_s0 = 6;
        break;
    case 0x44:
        var_s0 = 5;
        break;
    case 0x26:
        var_s0 = 0;
        break;
    case 0x28:
        var_s0 = 1;
        break;
    case 0x25:
        var_s0 = 3;
        break;
    case 0x27:
        var_s0 = 2;
        break;
    case 0xD:
        var_s0 = 5;
        break;
    case 0x8:
    case 0x2E:
    case 0x1B:
        var_s0 = 6;
        break;
    case 0x51:
        var_s0 = 7;
        break;
    case 0x45:
        var_s0 = 8;
        break;
    case 0x20:
        var_s0 = 0xE;
        break;
    case 0x70:
        var_s0 = 0xD;
        break;
    }
    if (var_s0 != 0x18) {
        if (arg0 == 7) {
            func_001BC240();
        } else {
            if (arg2 == 0) {
                func_001BC240();
            }
            func_001BC240();
        }
    }
    return 0;
}
