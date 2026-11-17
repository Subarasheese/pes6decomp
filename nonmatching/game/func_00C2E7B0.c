/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00291DD0(s32, s32);
extern s32 func_00292BF0(void);
extern s32 func_00292B90(void);
extern s32 func_00292AA0(void);
extern s32 func_00292800(s32);
extern s32 func_00292B10(void);
extern s32 func_00292BB0();
extern s32 func_009A0270();
extern s32 func_00C2EB10(void *, u8);
extern char D_00591F13[];

s32 func_00C2E7B0(u8 *arg0, u8 *arg1) {
    s32 s0, s1, s2;

    s2 = *arg0;
    s1 = 0x5A - (func_009A0270() & 0xFF);
    s0 = func_00C2EB10(arg1, s2);
    if (*(u8 *)D_00591F13 != 0 && s0 >= 0) {
        return 0;
    }
    if (s0 == 0x7FFF) {
        return s1 < 0xF ? 3 : 1;
    }
    s2 = func_00291DD0(s2, func_00292800(s2) & 0xFF);
    if (func_00292B90() != 0) {
        if (func_00292B10() == 0) {
            s2 = 1;
        } else if (func_00292AA0() != 0) {
            s2 = 1;
        }
    }
    if (s0 >= 5) {
        if (arg1[1] >= 3 && arg1[0] < 2 && s2 == 0 && func_00292BF0() == 0) {
            return 2;
        }
        return s1 < 0x3C ? 3 : 1;
    }
    if (s0 >= 3) {
        if (s2 == 0 && arg1[0] < 4 && func_00292BF0() == 0) {
            if (s1 < 0xF && arg1[0] >= 2 && func_00292BB0() != 0) {
                return 3;
            }
            return 1;
        }
        return s1 < (s0 == 3 ? 0x23 : 0x2D) ? 3 : 1;
    }
    if (s0 >= 2) {
        if (s1 >= 0x14) {
            return s1 < 0x26 ? 1 : 0;
        }
        if (arg1[0] < 2 && s2 == 0 && func_00292BF0() == 0) {
            return 1;
        }
        return func_00292BB0() == 0 ? 1 : 3;
    }
    if (s0 > 0) {
        if (s1 >= 0x1F) {
            return 0;
        }
        if (s1 < 0xF) {
            if (s2 == 0 && func_00292BF0() == 0) {
                return 1;
            }
            return arg1[0] < 2 ? 1 : 3;
        }
        return 1;
    }
    if (s0 < 0) {
        if (s0 < -3) {
            return arg1[0] < 4 ? 0 : 1;
        }
        return 0;
    }
    if (arg1[0] >= 3 && s1 >= 0xA && s1 < 0x2E) {
        return 1;
    }
    if (arg1[1] >= 4) {
        return s1 >= 0xA ? 2 : 4;
    }
    if (s1 >= 0xA) {
        return 0;
    }
    return arg1[1] < 3 ? 2 : 4;
}
