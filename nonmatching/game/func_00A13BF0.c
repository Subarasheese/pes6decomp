/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009F4B70(s32, s32, f32);
extern f32 func_00AB4270(void *);
extern f32 func_00AB3C60(void *, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00AB3B70(void *, s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00A19D40(void *, M2C_UNK, M2C_UNK, s16, s8, s32, f32); /* extern */
s32 func_00A22C50(void *, M2C_UNK, s32, M2C_UNK, s32, s16, s32, M2C_UNK, f32); /* extern */
s32 func_00A9E080(void *, u16, u16, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00AADED0(void *, s16, M2C_UNK, s32);   /* extern */
s32 func_00AB3590(void *, M2C_UNK);                 /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94], gap at: 0x8. */
s32 func_00A13BF0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_s5;
    f32 temp_f0;
    s16 var_s2;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s3;
    s32 var_v0;
    s8 temp_s1;

    var_s3 = arg3;
    temp_f0 = func_00AB4270(arg0);
    temp_s0 = func_009F4B70(0x3A6, 0, temp_f0);
    if ((func_009B30B0(arg1, arg2) & 0xFFFF) < 0x78) {
        var_v0 = (((M2C_FIELD(arg0, u16 *, 0x26) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
    } else {
        var_v0 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1;
    }
    temp_s1 = var_v0 & 0xFF;
    var_s5 = 0x3A6;
    temp_s6 = temp_s1 & 0xFF;
    temp_s7 = arg2 & 0xFFFF;
    var_s2 = (temp_s7 + ((func_00AB3590(arg0, 0x3A6) & 0xFFFF) * ((temp_s6 != 0) ? -1 : 1))) & 0xFFFF;
    if (func_00A19D40(arg0, 0x3A6, 0, var_s2, temp_s1, temp_s0, temp_f0) == 0) {
        var_s5 = 0x105;
        var_s2 = (temp_s7 + ((func_00AB3590(arg0, 0x105) & 0xFFFF) * ((temp_s6 != 0) ? -1 : 1))) & 0xFFFF;
        var_s3 = func_00A9E080(arg0, M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), var_s3, 0x40, 0);
    }
    if (func_00A22C50(arg0, var_s5, temp_s1 & 0xFF, 0, temp_s0, var_s2, var_s3, 0, temp_f0) != 0) {
        func_00209A00(M2C_FIELD(arg0, void **, 4), var_s5, 0);
        func_00207390(M2C_FIELD(arg0, void **, 4), 6);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, temp_s0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = temp_s1;
        func_00AADED0(arg0, var_s2, 0, temp_s0);
        M2C_FIELD(arg0, s16 *, 0x2C) = var_s2;
        M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, (s32) var_s2, temp_s0);
        return 1;
    }
    return 0;
}
