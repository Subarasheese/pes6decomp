/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_00AB4460(void *, s32, s32);

s32 func_00A806A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 v1;
    s32 a5;
    s32 a1;
    s32 s0;
    s32 s2;
    void *a0;

    a0 = arg0;
    v1 = M2C_FIELD(arg0, u8 *, 0x5C) * 12;
    if (arg3 >= 0x1D00 - v1 && arg4 >= 0x201) {
        if (arg4 < 0x600 && (arg1 & 0xFFFF) >= 0x50 && (arg2 & 0xFFFF) >= 0x51) {
            return 4;
        }
        return 0;
    }
    if (arg4 >= 0x301) {
        return 2;
    }
    a5 = M2C_FIELD(arg0, s32 *, 0x98);
    if (a5 == 1 && M2C_FIELD(arg0, u16 *, 0x3A) == 2) {
        return 2;
    }
    a1 = M2C_FIELD(arg0, u16 *, 0x3A);
    if (a1 == 4) {
        a0 = (void *)(0x1900 - v1);
        if (arg3 < 0x1900 - v1) {
            return 4;
        }
    }
    if (a5 != 1 && arg4 < 0xC0) {
        return 4;
    }
    s0 = arg2 & 0xFFFF;
    if (s0 * 2 + 0x140 >= arg4) {
        if (a5 != 1 && a1 == 4) {
            return 4;
        }
    }
    if (s0 * 4 + 0x180 >= arg4 && (arg1 & 0xFFFF) >= 0x29) {
        return 4;
    }
    if (0x1300 - v1 >= arg3) {
        return 4;
    }
    s2 = func_00AB4460(a0, a1, arg2);
    if (func_002AE670(0x20) >= s2 && (arg1 & 0xFFFF) >= 0x29 && s0 >= 0x30) {
        return 4;
    }
    return 1;
}
