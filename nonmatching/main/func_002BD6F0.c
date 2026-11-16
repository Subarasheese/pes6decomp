/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s16 func_002C2100(s32, s32, s32, s32);
s32 func_00C12150(s32, s32);
s32 func_00C18DA0(s32);
u32 func_00C222B0(s32, s32);

void func_002BD6F0(u8 *arg0, s32 arg1) {
    s16 *var_s0;
    s32 s6;
    s32 s1;
    s32 s2;
    s32 i;

    i = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    s6 = (arg1 & 0xFF) & 0x1F;
    s1 = ((arg1 & 0xFF) >> 5) & 1;
    var_s0 = (s16 *)arg0;
    do {
        s2 = func_00C18DA0(i & 0xFF) & 0xFF;
        *var_s0 = func_002C2100(s2, func_00C18DA0(((i & 0xFF) + 1) & 0xFF) & 0xFF, arg1, 0);
        i += 1;
        M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + *var_s0);
        var_s0 += 1;
    } while (i < 4);
    M2C_FIELD(arg0, s16 *, 0xA) = func_002C2100(0, 0xFF, arg1, 1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_002C2100(0, 0xFF, arg1, 0x12);
    M2C_FIELD(arg0, s16 *, 0xE) = func_002C2100(0, 0xFF, arg1, 4);
    M2C_FIELD(arg0, s16 *, 0x10) = func_002C2100(0, 0xFF, arg1, 0xC);
    M2C_FIELD(arg0, s16 *, 0x12) = func_002C2100(0, 0xFF, arg1, 0xA);
    M2C_FIELD(arg0, s16 *, 0x14) = func_002C2100(0, 0xFF, arg1, 0xE);
    M2C_FIELD(arg0, s8 *, 0x1C) = func_002C2100(0, 0xFF, arg1, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1D) = func_002C2100(0, 0xFF, arg1, 0x11);
    M2C_FIELD(arg0, s32 *, 0x20) = func_00C12150(s1, s6);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) func_00C222B0(s1, s6);
}
